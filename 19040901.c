#include<stdio.h>
int main(){
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	if(a+b>c && a+c>b && b+c>a){
		if(a==b && b==c && c==a){
			printf("�ȱ�������\n");
		}
		else if(a==b || b==a || a==c){
			printf("����������\n");
		}
		else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
			printf("ֱ��������\n");
		}
		else{
			printf("����������\n");
		}
	}else{
		printf("���ܹ���������\n");
	}
	return 0;
}