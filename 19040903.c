//未完成
#include<stdio.h>
int main(){
	char t;
	int a, b, c, n;
	double cost;
	printf("请输入公布价：头等舱 公务舱 经济舱\n");
	scanf("%d%d%d",&a ,&b, &c);
	printf("请输入舱位代码：\n");
	scanf("%s", &t);
	printf("请输入购票数量：\n");
	scanf("%d", &n);
	switch((int)t){
		case 70:	cost = a*n;		break;
		case 67:	cost = b*n;		break;
		case 66:	cost = c*n*0.9;	break;
		case 72:	cost = c*n*0.85;break;
		case 75:	cost = c*n*0.8;	break;
		case 76:	cost = c*n*0.75;break;
		case 77:	cost = c*n*0.7;	break;
		case 78:	cost = c*n*0.65;break;
		case 81:	cost = c*n*0.6;	break;
		case 84:	cost = c*n*0.55;break;
		case 88:	cost = c*n*0.5;	break;
		default:	cost = -1;		break;
	}
	printf("总票款为：%.2lf\n", cost);
	return 0;
}
