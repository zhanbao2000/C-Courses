#include<stdio.h>
int main(){
	int x, a, b, c, d;
	scanf("%d", &x);
	a = x/100;
	x = x-a*100;
	b = x/50;
	x = x-b*50;
	c = x/10;
	x = x-c*10;
	d = x/5;
	x = x-d*5;
	printf("%d\n%d\n%d\n%d\n%d\n", a, b, c, d, x);
	return 0;
}