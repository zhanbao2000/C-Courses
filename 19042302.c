#include<stdio.h>
#include<math.h>
int main(){
	int x, sum, i;
	sum = 0;
	scanf("%d",&x);

	for(i = 1;i<=4;i++){
		sum += pow(x-x/10*10, 3);
		x /= 10;
	}

	printf("%d",sum);
	return 0;
}