#include<stdio.h>
#include<math.h>

int fun(long long s){
	long long t;
	int i, j;
	
	i = log10(s) + 1;
	i /= 2;
	t = 0;

	for(j = 0;j<i+1;j++){
		t = t+pow(10,j)*(s-s/10*10);
		s = s/100;
	}
	return t;
}

int main(){
	long long s;
	scanf("%lld",&s);
	printf("%lld",fun(s));
	return 0;
}