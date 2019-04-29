compile: src/caesar_cipher.o src/main.o
	gcc -o bin/main.bin src/caesar_cipher.o src/main.o

exec:
	./bin/main.bin Stanley
