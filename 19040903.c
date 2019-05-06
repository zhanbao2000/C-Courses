#include<stdio.h>
int main(){
	char t;
	int a, b, c, n;
	double cost;
	printf("请输入F舱、C舱和Y舱的公布价\n");
	scanf("%d%d%d",&a ,&b, &c);
	printf("请输入舱位代码和购票数量\n");
	scanf(" %c%d", &t, &n);
	switch(t){
		case 'F':	cost = a*n;		break;
		case 'C':	cost = b*n;		break;
		case 'B':	cost = c*n*0.9;	break;
		case 'H':	cost = c*n*0.85;break;
		case 'K':	cost = c*n*0.8;	break;
		case 'L':	cost = c*n*0.75;break;
		case 'M':	cost = c*n*0.7;	break;
		case 'N':	cost = c*n*0.65;break;
		case 'Q':	cost = c*n*0.6;	break;
		case 'T':	cost = c*n*0.55;break;
		case 'X':	cost = c*n*0.5;	break;
		default:	cost = -1;		break;
	}
	printf("机票款总额为%.0f", cost);
	return 0;
}
