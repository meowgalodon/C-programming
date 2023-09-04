#include <stdio.h>

//Tinh tong giai thua S = 1 + 2! + 3! + ... + n!
//Luu y : n > 30 se tran bo nho

int main(){
	unsigned int n;
	printf("Nhap so tu nhien n : ");
	scanf("%d", &n);
	
	unsigned long long sum = 0;
	unsigned long long giaithua = 1;
	
	int i;
	for(i = 1 ; i <= n ; i++){
		giaithua *= i;		//giaithua = i!
		sum += giaithua;	//sum = sum + i!
	}
	printf("Tong giai thua S = %lld", sum);
	return 0;
}
