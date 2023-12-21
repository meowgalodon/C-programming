#include <stdio.h>

int main(){
	unsigned int n;
	printf("Hay nhap so nguyen n : ");
	scanf("%d", &n);
	if(n < 2){
		printf("Nhap n > 2!!!");
	}else{
		unsigned int i = 2;
		printf("%d = ", n);
		while(n > 1){
			if(n % i == 0){
				printf("%d", i);
				if(n != i){
					printf("x");
				}
				n /= i;
			}else{
				i++;
			}
		}
	}
	return 0;
}
