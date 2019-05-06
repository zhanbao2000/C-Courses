#include<stdio.h>
int main(){
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	if(a+b>c && a+c>b && b+c>a){
		if(a==b && b==c && c==a){
			printf("该三角形为等边三角形");
		}
		else if(a==b || b==a || a==c){
			printf("该三角形为等腰三角形");
		}
		else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
			printf("该三角形为直角三角形");
		}
		else{
			printf("该三角形为任意三角形");
		}
	}else{
		printf("不能构成三角形\n");
	}
	return 0;
}
