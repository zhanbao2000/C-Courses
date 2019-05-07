#include<stdio.h>

int units(int a, int b){
	return (a-a/10*10)==(b-b/10*10) || (a-a/100*100)==(b-b/100*100);
}

int main(){
	int x, y;
	scanf("%d", &x);
	y = x*x;
	printf("%d",units(x, y));
	return 0;
}
