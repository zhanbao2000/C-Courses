#include<stdio.h>
#include<math.h>

long long fact(int x){
	int i, result;
	result = 1;
	for(i = 1;i<=x;i++){
		result *= i;
	}
	return result;
}
	
int main(){
	int n, i, sum;
	sum = 0;
	scanf("%d",&n);
	for(i = 1;i<=n;i++){
		sum += fact(i*2);
	}

	printf("%d",sum);
	return 0;
}