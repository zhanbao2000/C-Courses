#include<stdio.h>

int main(){
	long num[10];
	char name[10][10];
	char sex[10];
	float score[5][10];
	int i = 0;
	
	for(i;i<=3;i++){
		scanf("%ld%s %c%f%f%f", &num[i], &name[i], &sex[i], &score[1][i], &score[2][i], &score[3][i]);
		score[0][i] = (score[1][i] + score[2][i] + score[3][i]);
	}
	
	printf("学号    姓名 性别 课1   课2   课3  总分 平均分\n");
	for(i = 0;i<=3;i++){
		printf("%6ld%6s%3c", num[i], name[i], sex[i]);
		printf("%6.1f%6.1f%6.1f%6.1f%6.1f\n", score[1][i], score[2][i], score[3][i], score[0][i], score[0][i] / 3.0);
	}
}

