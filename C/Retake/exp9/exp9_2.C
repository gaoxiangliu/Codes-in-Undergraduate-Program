#include <stdio.h>

int ack(int, int);

int main(){
	int m, n;
	scanf("%d%d", &m, &n);
	printf("Ack(%d,%d)=%d", m, n, ack(m, n));
	return 0;
}

int ack(int m, int n){
	if(m == 0)
		return n + 1;
	if(n == 0 && m > 0)
		return ack(m - 1, 1);
	if(n > 0 && m > 0)
		return ack(m - 1, ack(m, n - 1));
	return 0;
}
