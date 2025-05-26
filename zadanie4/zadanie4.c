// Индекс первого вхождения числа x среди N элементов или -1, если не найдено

#include <stdio.h>

int main(){
	int x, n;
	scanf("%d %d", &x, &n);
	int a;
	int res = -1;
	int i = 0;
	while(i < n){
		scanf("%d", &a);
		if(a == x){
			res = i;
			break;
		}
		i = i + 1;
	}
	printf("%d", res + 1);
	return 0;
}
	

