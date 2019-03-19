#include<stdio.h>
main(){
	int i = 6, j = 7, x, y, z, a, b;
	char c1, c2;
	i++;
	printf("i=%d, j=%d\n", ++i, j++);
	x = 10;
	x += x -= x - x;
	printf("x=%d\n", x);
	y = z = x;
	b = 246;
	a = b/100%9;
	printf("a=%d\n", a);
	c1 = 'A'+'6'-'3';
	c2 = 'A'+'6'-3;
	printf("c1=%c, c2=%c\n", c1, c2);
}