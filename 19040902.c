#include<stdio.h>
int main(){
	double a, b, m;
	scanf("%lf%lf", &a, &b);
	if(b==0.5){
		m = a+a*0.01275;
	}else{
		switch((int)b){
			case 1:	m = a+a*0.0275;
			case 2:	m = a+a*0.067;
			case 3:	m = a+a*0.12;
			case 5: m = a+a*0.2375;
		}
	}
	printf("%.2lf\n", m);
	return 0;
}
