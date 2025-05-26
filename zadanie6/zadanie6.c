// Вводятся числа. Окончание ввода число 0. Найти сумму четных

#include <stdio.h>

int main(){
	int a;
	int sum = 0;
	while(a != 0){
		scanf("%d", &a);
		if(a % 2 == 0){
			sum = sum + a;
		}
	}
	printf("%d", sum);
	return 0;
}
