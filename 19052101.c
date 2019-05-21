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

int fun(int k, int a[]){
	int count = 0, i;
	for(i = 2;i<=k;i++){
		if(isPrime(i)){
			a[count] = i;
			count++;
		} 
	}
	return count;
}

int main(){
	int a[100], i, x, n;
	scanf("%d", &n);
	x = fun(n, a);
	printf("小于%d的素数有%d个：\n", n, x);
	for(i = 1;i<=x;i++){
		printf("%5d", a[i-1]);
	} 
	return 0;
}