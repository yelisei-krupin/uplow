# O'zgaruvchilar
CC = gcc
CFLAGS = -Iinclude
SRC = src/uplow.c example/main.c
TARGET = build/result

# Standart qoida (shunchaki 'make' deb yozganda ishlaydi)
all: $(TARGET)

# Build papkasini yaratish va dasturni kompilyatsiya qilish
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

# Tozalash qoidasi (make clean)
clean:
	rm -rf build
