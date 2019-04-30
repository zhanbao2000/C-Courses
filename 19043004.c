#include<stdio.h>
#include<math.h>

double P(int n, double x){
	if(0==n) return 1;
	else if(1==n) return x;
	else return ((2*n-1)*x-P(n-1,x)-(n-1)*P(n-2,x))/n;
}

int main(){
	int n;
	double x;
	scanf("%d%lf", &n, &x);
	printf("%lf",P(n, x));
	return 0;
}