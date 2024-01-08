#include <stdio.h>

int main(){
	long n;
	printf("Moi ban nhap n: ");
	scanf("%ld", &n);
	
	long dao = 0;
	long m = n;
	
	while(m > 0){
		dao = (dao * 10) + (m % 10);
		m /= 10;
	}
	
	if(dao == n){
		printf("%ld la so thuan nghich", n);
	}
	else{
		printf("%ld khong la so thuan nghich", n);
	}
}
