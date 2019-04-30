#include<stdio.h>

int add(int n, int sum){
	sum += n;
	if(n>0){
		return add(--n, sum);
	}else{
		return sum;
	}
}

int main(){
	printf("%d\n", add(100, 0));
	return 0;
}