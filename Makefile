compile: src/caesar_cipher.o src/main.o
	gcc -o bin/main.bin src/caesar_cipher.o src/main.o

exec_e:
	./bin/main.bin -e 5 Stanley

exec_d:
	./bin/main.bin -d 5 xyfsqjd
