compile: src/caesar_cipher.o src/main.o
	gcc -o bin/main.bin src/caesar_cipher.o src/main.o

exec_e:
	./bin/main.bin -e 5 Stanley

exec_d:
	./bin/main.bin -d 5 xyfsqjd

test_compile: test/caesar_cipher.o test/assert.o src/caesar_cipher.o
	gcc -o bin/test.bin test/caesar_cipher.o test/assert.o src/caesar_cipher.o

test_run: test/caesar_cipher.o test/assert.o src/caesar_cipher.o
	gcc -o bin/test.bin test/caesar_cipher.o test/assert.o src/caesar_cipher.o
	./bin/test.bin
