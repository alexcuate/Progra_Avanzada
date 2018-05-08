//Jose Alejandro Vazquez Sanchez A01225573
#include<stdio.h>
#include<string.h>
#define MAX 1000002
 
int f[MAX];
int dcMax[MAX];

void init() {
	int i,j;
	for(i=1; i<=MAX; i++) {
		f[i] = i;
	}
	for(i=2;i<=1000; i++) {
		if(f[i] != i)
			continue;
		for(j=i; j<=MAX; j+=i) {
			f[j] = i;
		}
	}
}
void solve() {
	int times,
      size,
      value,
      count,
      i,
      d,
      answer;
	scanf("%d",&times);
	while(times--) {
		count = 0;
		answer = 0;
		memset(dcMax, 0, sizeof dcMax);
		scanf("%d",&size);
		for(i=0; i<size; i++) {
			scanf("%d",&value);
			while(value > 1) {
				count = 0;
				d = f[value];
				while(value%d == 0) {
					value/=d;
					count++;
				}
				if(dcMax[d] < count) {
					answer += count - dcMax[d];
					dcMax[d] = count; 
				}
			}
		}
		printf("%d\n",answer);
	}
}
int main() {
	init();
	solve();
	return 0;
}