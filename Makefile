.PHONY: install run check verify test e2e comparator demo clean

install:
	@command -v lake >/dev/null 2>&1 || { echo "Installing elan (the Lean version manager)..."; curl -sSf https://raw.githubusercontent.com/leanprover/elan/master/elan-init.sh | sh -s -- -y --default-toolchain none; }
	cd lean && PATH="$$HOME/.elan/bin:$$PATH" lake build
	cd app && npm ci --no-audit --no-fund
	cd app && npm run build

run:
	@(sleep 1.5; command -v open >/dev/null 2>&1 && open http://localhost:4173 || xdg-open http://localhost:4173 >/dev/null 2>&1 || true) &
	PATH="$$HOME/.elan/bin:$$PATH" node server/index.mjs

check:
	cd lean && PATH="$$HOME/.elan/bin:$$PATH" lake build Choreo.Examples Solution

verify:
	PATH="$$HOME/.elan/bin:$$PATH" node scripts/verify.mjs

test:
	cd app && npm test

e2e:
	node scripts/e2e.cjs

comparator:
	./scripts/comparator-docker.sh

demo:
	cd lean && PATH="$$HOME/.elan/bin:$$PATH" lake build choreo && .lake/build/bin/choreo demo demo-request.json Choreo/Demo.lean Solution.lean

clean:
	rm -rf app/dist app/node_modules lean/.lake .cache
