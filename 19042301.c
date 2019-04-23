#include<stdio.h>
#include<math.h>
int main(){
	long long s, t;
	int i, j;
	scanf("%lld",&s);
	i = log10(s) + 1;
	i /= 2;
	s = s/10;
	t = 0;

	for(j = 0;j<i;j++){
		t = t+pow(10,j)*(s-s/10*10);
		s = s/100;
	}

	printf("%lld",t);
	return 0;
}