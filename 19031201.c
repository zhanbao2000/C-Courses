/*
1. 试编写一个程序，从键盘输入两个数，计算这两个数的和。
提示：假设输入的两个数分别为a和b、和为sum（均为int型），则从键盘输入a和b的值，然后计算sum的值，并输出结果。
*/

#include<stdio.h>
int main(){
	int a, b, sum;
	scanf("%d%d", &a, &b);
	sum = a + b;
	printf("%d", sum);
	return 0;
}
