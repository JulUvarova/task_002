CFLAGS=-Wall -Wextra -Werror -std=c11

all: clean pascal_triangle

pascal_triangle: pascal_triangle.c
	gcc $(CFLAGS) pascal_triangle.c -o ../bin/pascal_triangle -lm

clean:
	rm -rf *.o *.a ../bin/pascal_triangle

check:
	clang-format -n *.c
	cppcheck --enable=all --suppress=missingIncludeSystem *.c 
	valgrind --tool=memcheck --leak-check=yes --track-origins=yes ../bin/pascal_triangle

# test:
# 	pytest --color=yes -v --tb=short tests