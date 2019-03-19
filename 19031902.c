#include<stdio.h>
#include<math.h>
main(){
	float a, b, c, area;
	printf("请输入直角三角形的两条直角边：\n");
	scanf("%f%f", &a, &b);
	c = sqrt(a*a+b*b);
	area = a*b/2;
	printf("斜边长度为：%.2f\n", c);
	printf("三角形面积为：%.2f\n", area);
}