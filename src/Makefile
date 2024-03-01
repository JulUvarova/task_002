CFLAGS=-Wall -Wextra -Werror -std=c11

all: clean pascal_triangle pascal_matrix

pascal_triangle: pascal_triangle.c
	gcc $(CFLAGS) pascal_triangle.c -o ../bin/pascal_triangle -lm

pascal_matrix: pascal_matrix.c
	gcc $(CFLAGS) pascal_matrix.c -o ../bin/pascal_matrix -lm

clean:
	rm -rf *.o *.a ../bin/pascal_triangle ../bin/pascal_matrix

check:
	clang-format -n *.c
	cppcheck --enable=all --suppress=missingIncludeSystem *.c 
	valgrind --tool=memcheck --leak-check=yes --track-origins=yes -s ../bin/pascal_matrix

# test:
# 	pytest --color=yes -v --tb=short tests