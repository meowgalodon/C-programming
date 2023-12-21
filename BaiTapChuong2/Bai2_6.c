#include <stdio.h>

int main(){
	unsigned int n;
	printf("Moi nhap so nguyen duong n: ");
	scanf("%d", &n);
	unsigned long long sum = 0;
	long i;
	for(i = 7 ; i <= n ; i += 7){
		sum += i;
	}
	printf("Tong cac so khong lon hon n, chia het cho 7 la :\nS = %lld", sum);
	return 0;
}
