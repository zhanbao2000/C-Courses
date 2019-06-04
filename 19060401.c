#include<stdio.h>

void change(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int *pmax(int *x, int *y){
	return *x>*y?x:y;
}

int *pmin(int *x, int *y){
	return *x<*y?x:y;
}

int main(){
	int a, b, c;
	int *max, *min;
	scanf("%d%d%d", &a, &b, &c);
	max = pmax(&a, pmax(&b, &c));
	min = pmin(&a, pmin(&b, &c));
	change(max, min);
	printf("%d %d %d\n", a, b, c);
	printf("&a == %p\n&b == %p\n&c == %p\n", &a, &b, &c);
	return 0;
}