#include<stdio.h>
int main(){
	double a, b, m;
	scanf("%lf%lf", &a, &b);
	if(b==0.5){
		m = a*0.01275;
	}else{
		switch((int)b){
			case 1:	m = a*0.0275;	break;
			case 2:	m = a*0.067;	break;
			case 3:	m = a*0.12;	break;
			case 5: m = a*0.2375;	break;
		}
	}
	printf("%.2lf\n", m);
	return 0;
}
