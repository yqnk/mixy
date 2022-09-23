CC ?= cc
CFLAGS += -Wall

DESTDIR ?=
PREFIX ?= /usr/local
BINDIR ?= /bin
prefix ?= $(DESTDIR)$(PREFIX)
bindir ?= $(prefix)$(BINDIR)

INSTALL ?= install -D
RM ?= rm -f

.PHONY: default
default: mixy

mixy: main.c mix.c
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: install
install: mixy
	$(INSTALL) mixy $(bindir)

.PHONY: uninstall
uninstall:
	$(RM) $(bindir)/mixy