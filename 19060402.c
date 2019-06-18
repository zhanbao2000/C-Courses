#include<stdio.h>

int main(){
	int i = 0;
	int pmax = 0, pmin = 0;
	int num[9];
	int max, min;
	for(i;i<=9;i++){
		int temp;
		scanf("%d", &temp);
		num[i] = temp;
	}
	max = num[0];
	min = num[0];
	for(i=1;i<=9;i++){
		if(num[i]>max){
			max = num[i];
			pmax = i;
		}
		if(num[i]<min){
			min = num[i];
			pmin = i;
		}
	}
	printf("最大数是%d,其下标是%d,最小数%d,其下标是%d\n", max, pmax, min, pmin);
	return 0;
}
