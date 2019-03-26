#include<stdio.h>
int main(){
	int i;
	float bon1 = 100000*0.1;
	float bon2 = bon1+100000*0.075;
	float bon4 = bon2+200000*0.05;
	float bon6 = bon4+200000*0.03;
	float bon10 = bon6+400000*0.015;
	float bonus;
	scanf("%d",&i);
	switch(i/100000){
		case 0:	bonus = i*0.1;	break;
		case 1:	bonus = bon1+(i-100000)*0.075;	break;
		case 2:	bonus = bon2+(i-200000)*0.05;	break;
		case 3:	bonus = bon2+(i-200000)*0.05;	break;
		case 4:	bonus = bon4+(i-400000)*0.03;	break;
		case 5:	bonus = bon4+(i-400000)*0.03;	break;
		case 6:	bonus = bon6+(i-600000)*0.015;	break;
		case 7:	bonus = bon6+(i-600000)*0.015;	break;
		case 8:	bonus = bon6+(i-600000)*0.015;	break;
		case 9:	bonus = bon6+(i-600000)*0.015;	break;
		default:bonus = bon10+(i-1000000)*0.01;	break;
	}
	printf("%0.f",bonus);
	return 0;
}