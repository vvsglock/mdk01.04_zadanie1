#include <stdio.h>

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int i = 0;
	while(i < n){
		printf("*");
		i = i + 1;
	}
	printf("\n");
	i = 0;
	while(i < m - 2){
		printf("*");
		int j = 0;
		while(j < n - 2){
			printf("-");
			j = j + 1;
		}
		printf("*\n");
		i = i + 1;
	}
	i = 0;
	while(i < n){
		printf("*");
		i = i + 1;
	}
	printf("\n");
	return 0;
}
