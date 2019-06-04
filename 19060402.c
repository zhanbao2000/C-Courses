#include<stdio.h>

int *pmax(int *x, int *y){
	return *x>*y?x:y;
}

int *pmin(int *x, int *y){
	return *x<*y?x:y;
}

int main(){
	int num[] = {1,8,10,2,-5,0,7,15,4,-5};
	int *p = &num[0];
	int i = 1, max = *p, min = *p;
	for(i;i<=9;i++){
		p++;
		if(*p>max){

		}
	}
	return 0;
}