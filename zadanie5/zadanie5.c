// Минимальное из N чисел

#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int i = 0;
	int a;
	int min = a;
	while(i < n){
		scanf("%d", &a);
		if(a < min){
			min = a;
		}
		i = i + 1;
	}
	printf("%d", min);
	return 0;
}
