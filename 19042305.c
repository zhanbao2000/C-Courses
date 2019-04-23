//Î´Íê³É
#include<stdio.h>
#include<math.h>

long long pp(int d, int x){
	int i, result;
	result = 0;
	for(i = 1;i<=x;i++){
		result += ....;
	}
	return result;
}
	
int main(){
	int i, d, n, sum;
	sum = 0;
	scanf("%d%d",&d ,&n);

	for(i = 1;i<=n;i++){
		sum += pp(d,i);
	}

	printf("%d",sum);
	return 0;
}