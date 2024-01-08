#include <stdio.h>

int main(){
	unsigned long long n;
	printf("Moi ban nhap so nguyen duong n: ");
	scanf("%ld", &n);
	
	unsigned long long answer = 1;
	unsigned long long i;
	for(i = n; i >= 1; i--){
		answer *= i;
	}
	
	printf("Ket qua la: %ld", answer);
	return 0;
}
