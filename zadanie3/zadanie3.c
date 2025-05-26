#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int proizved = 0;
	while(b > 0){
		proizved = proizved + a;
		b = b - 1;
	}
	printf("%d", proizved);
	return 0;
}
