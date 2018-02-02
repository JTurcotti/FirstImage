all:
	gcc -o generator generator.c -lm
	./generator
	convert out.ppm out.png
