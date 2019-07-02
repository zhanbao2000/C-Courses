#include<stdio.h>

int main(){
	long num[10];
	char name[10][10];
	float price[10];
	int max = 0;
	int i = 0;
	
	for(i;i<=4;i++)
		scanf("%ld%s%f", &num[i], &name[i], &price[i]);
	
	
	for(i = 0;i<=3;){
		if(price[++i] >= price[max]){
			max = i;
			//printf("%d\n", max);
		}
	}
	//printf("%d\n", max);
	printf("%ld  %s  %.0f\n", num[max], name[max], price[max]);
}
