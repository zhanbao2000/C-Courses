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
	printf("%d个10元,%d个5元,%d个1元,%d个5角和%d个1角", a, b, c, d, x);
	return 0;
}
