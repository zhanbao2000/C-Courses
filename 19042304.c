#include<stdio.h>
#include<math.h>

int isPrime(int x){
	int i;
	int result = 1;
	for(i = 2;i<=sqrt(x);i++){
		if(0==x%i) result = 0;
	}
	return result;
}
	
int main(){
	int i, m, sum;
	sum = 0;
	scanf("%d",&m);

	for(i = 2;i<=m;i++){
		if(isPrime(i)) sum += i;
	}

	printf("%d",sum);
	return 0;
}