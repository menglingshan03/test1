test.gz:test
	cat $(filter-out FORCE,$^) | gzip -n -f -9 > $@

test: test.c FORCE
	gcc $< -o $@

.PHONY:FORCE

FORCE:
