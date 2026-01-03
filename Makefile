CC = gcc
CFLAGS = -Iinclude -fPIC
SRC = src/uplow.c
OBJ = build/uplow.o
LIB = build/libuplow.a
PREFIX = /usr/local
INCDIR = $(PREFIX)/include
LIBDIR = $(PREFIX)/lib

all: $(LIB)

$(OBJ): $(SRC)
	@mkdir -p build
	$(CC) $(CFLAGS) -c src/uplow.c -o $(OBJ)

$(LIB): $(OBJ)
	ar rcs $(LIB) $(OBJ)
install: $(LIB)
	install -d $(INCDIR)
	install -m 644 include/uplow.h $(INCDIR)/
	install -d $(LIBDIR)
	install -m 644 $(LIB) $(LIBDIR)/
	@echo "library successfully created! fucked out!"

# O'chirish
uninstall:
	rm -f $(INCDIR)/uplow.h
	rm -f $(LIBDIR)/libuplow.a
	@echo "library fucking deleted"

clean:
	rm -rf build
