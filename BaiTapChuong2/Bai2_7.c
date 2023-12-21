#include <stdio.h>

//Tinh tat ca uoc chung cua so tu nhien n

int main(){
	unsigned long n;
	printf("Nhap so tu nhien n : ");
	scanf("%d", &n);
	unsigned long i;
	unsigned long counter = 0;
	for(i = 1 ; i <= n ; i++){
		if(n % i == 0){
			printf("%ld ", i);
			counter++;	
		}
	}
	printf("\nTat ca uoc chung : %ld", counter);
	return 0;
}
