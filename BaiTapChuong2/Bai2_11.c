#include <stdio.h>

//In ra cac so tu 1 cho toi n
int main(){
	//Khai bao va nhap so nguyen duong n
	unsigned long long n;
	printf("Moi ban nhap so nguyen duong n: ");
	scanf("%ld", &n);
	
	//Dung vong lap de xuat ra cac so tu 1 cho toi n
	//Khoi tao bien chay i
	long long i = 0;
	for(i; i <= n; i++){
		printf("%ld ", i);
	}
	return 0;
}
