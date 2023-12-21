#include <stdio.h>

int main(){
//nhap so nguyen n	
	int n;
	printf("Nhap so nguyen n : ");
	scanf("%d",&n);
//kiem tra tinh chan - le
	if(n % 2 == 0){
		printf("%d la so chan\n",n);
	}else{
		printf("%d la so le\n",n);
	}
//kiem tra tinh am - duong
	if(n > 0){
		printf("%d la so duong",n);
	}else if(n == 0){
		printf("%d la so khong am khong duong",n);
	}else{
		printf("%d la so am",n);
	}
	
	return 0;
}
