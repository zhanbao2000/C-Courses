#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
#include <cstring>
#include <queue>
#include <set>
#include <map>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

#define fors(i,a,b) for(int i = (a) ; i <= (b) ; ++i)
#define mem(x,i) memset((x) , (i) , sizeof((x)))
#define Debug(...) fprinf(stderr , __VA_ARGS__)
#define IO(x) freopen(""#x".in","r",stdin);freopen(""#x".out","w",stdout);

typedef long long LL;

int read(){
	int s = 0 , f = 1;
	char c = getchar();
	while(c > '9' || c <'0'){
		if(c == '-') f = -1;
		c = getchar();
	}
	while(c <= '9' && c >= '0'){
		s = s * 10 + c - '0';
		c = getchar();
	}
	return s * f;
}


void write(int x){
	if(!x){
		putchar('0');
		return ;
	}
	if(x < 0){
		x = -x;
		putchar('-');
	}
	static int sta[36];
	int tot = 0;
	while(x){
		sta[tot++] = x % 10;
		x /= 10;
	}
	while(tot){
		putchar(sta[--tot] + 48);
	}
}
#define writen(x) (write((x)) , putchar(10))
#define writes(x) (write((x)) , putchar(32))

const int maxn = 2e4+7;


struct node{
	int u,v;
	bool operator < (const node &ano) const{
		return v < ano.v;
	}
}edge[maxn];

int n , m , head[maxn] , tot ;

void add(int u,int v){
	edge[++tot].v = v;
	edge[tot].u = head[u];
	head[u] = tot;
}

int vis[maxn],ansk[maxn];

int w[maxn];


int k1[maxn];


int ak1,ak2;




void work1(){
	fors(i,1,n){
		w[i] = read();
	}
	fors(i,1,n-1){
		int u = read() , v = read();
	}
	while(m--){
		int a = read() , op = read() , b = read() , ops = read();
		int sum = 0;
		mem(vis,0);
		if(a > b) {
			swap(a,b);
			swap(op,ops);
		}
		if(op == 0 && ops == 0){
			vis[a] = 1 , vis[b] = 1;
			for(int i = a-1 ; i >= 1; ++i){
				if(vis[i] == 0){
					sum += w[i]; 
					vis[i] = 1;
					--i;
				} 
			}
			fors(i,a+1,n){
				if(vis[i] == 0){
					sum += w[i];
					vis[i] = 1;
					++i;
				}
			} 
		}
		else if(op == 0 && ops ==1){
			sum += w[b];
			vis[b-1] = 1 , vis[b+1] = 1;
			
			vis[a] = 1;
			
			if(b - a + 1 & 1 != 0) vis[b-1] = 0;
			
			for(int i = a-1 ; i >= 1; ++i){
				if(vis[i] == 0){
					sum += w[i]; 
					vis[i] = 1;
					--i;
				} 
			}
			fors(i,a+1,n){
				if(vis[i] == 0){
					sum += w[i];
					vis[i] = 1;
					++i;
				}
			} 
			
		}
		else if(op == 1 && ops == 0){
			sum += w[a];

			vis[a] = 1, vis[a+1] = 1 , vis[a-1] = 0;
			vis[b] = 1;
			for(int i = a - 1; i >= 1; ++i){
				if(vis[i] == 0){
					sum += w[i]; 
					vis[i] = 1;
					++i;
				} 
			}
			fors(i,a+1,n){
				if(vis[i] == 0){
					sum += w[i];
					vis[i] = 1;
					++i;
				}
			} 

			sum += ak1 + ak2; 		
		}
		else if(op == 1 && ops == 1){
			sum += w[a] + w[b];
			vis[a-1] = 1, vis[a+1] = 1;
			vis[b-1] = 1, vis[b+1] = 1;
			for(int i = a - 2; i >= 1; ++i){
				if(vis[i] == 0){
					sum += w[i]; 
					vis[i] = 1;
					++i;
				} 
			}
			fors(i,a+2,n){
				if(vis[i] == 0){
					sum += w[i];
					vis[i] = 1;
					++i;
				}
			} 
		}
		if(sum == 0){
			puts("-1");
			continue;
		}
		writen(sum);
	}
}
int main(){
	IO(defense);
	char s[5];
	n = read() , m = read();
	scanf("%s", s+1);
	if(s[1] == 'A') work1();
	else if(s[2] == '1'){
		fors(i,1,n){
			w[i] = read();
		}
		fors(i,1,n-1){
			int  u = read() , v = read();
			add(u,v);
			add(v,u);
		}
		fors(i,1,m){
			int a1 = read() ,a2 = read() ,b = read() , op = read();
			puts("-1");
		}
	}
}
