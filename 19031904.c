#include<stdio.h>
int main(){
	int x, y, a, b, c, d;
	scanf("%d", &x);
	y = x;
	a = x/1000;
	x = x-a*1000;
	b = x/100;
	x = x-b*100;
	c = x/10;
	d = x-c*10;
	printf("%d��ǧλ��%d����λ��%d��ʮλ��%d����λ��%d\n", y, a, b, c, d);
	return 0;
}