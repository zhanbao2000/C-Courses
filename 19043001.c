#include<stdio.h>
#include<math.h>

int notPrime(int x){
	int i;
	int result = 0;
	for(i = 2;i<=sqrt(x);i++){
		if(0==x%i){
			result = 1;
			break;
		}
	}
	return result;
}

void gdbh(int x){
	int a = x-6, b = 3, c = 3;
	while(notPrime(a) || notPrime(b) || notPrime(c)){
		a -= 2;
		b += 2;
	}
	printf("%d=%d+%d+%d\n", x, a, b, c);
}

int main(){
	int x, i;
	scanf("%d", &x);
	gdbh(i)
	return 0;
}