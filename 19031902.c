#include<stdio.h>
#include<math.h>
main(){
	float a, b, c, area;
	printf("������ֱ�������ε�����ֱ�Ǳߣ�\n");
	scanf("%f%f", &a, &b);
	c = sqrt(a*a+b*b);
	area = a*b/2;
	printf("б�߳���Ϊ��%.2f\n", c);
	printf("���������Ϊ��%.2f\n", area);
}