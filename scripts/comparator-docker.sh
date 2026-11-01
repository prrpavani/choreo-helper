#!/bin/sh
# Runs Lean's Comparator on the demo routine inside a Linux container, because its sandbox
# (bubblewrap) needs Linux. The project is mounted read-only and copied inside the container.
set -e
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
if ! perl -e 'alarm 20; exec @ARGV' docker info >/dev/null 2>&1; then
  echo "Docker isn't responding. Start Docker Desktop and try again." >&2
  exit 2
fi
exec docker run --rm --cap-add SYS_ADMIN --security-opt seccomp=unconfined --security-opt apparmor=unconfined --security-opt systempaths=unconfined \
  --tmpfs /run -v "$ROOT/lean:/src:ro" ubuntu:24.04 sh -ec '
    apt-get update -qq && apt-get install -y -qq bubblewrap curl ca-certificates git clang >/dev/null
    curl -sSf https://raw.githubusercontent.com/leanprover/elan/master/elan-init.sh | sh -s -- -y --default-toolchain none
    export PATH="$HOME/.elan/bin:$PATH"
    mkdir /work && cd /src && tar --exclude=.lake -cf - . | tar -xf - -C /work && cd /work
    lake build
    mkdir -p /run/user/0 && export XDG_RUNTIME_DIR=/run/user/0
    lake comparator
    echo "COMPARATOR ACCEPTED"
  '
