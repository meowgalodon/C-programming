#include <stdio.h>

//Tinh tong cap so cong S = 1 + 2 + 3 + ... + n

int main(){
	int n; //Co the dung unsigned int de khong phai lay cac gia tri <= 0
	printf("Nhap n so nguyen can tinh : ");
	scanf("%d", &n);
	if(n <= 0){
		printf("Moi ban nhap n > 0!!!");
	}else{
		int sum;
		sum = ((n + 1) * n) / 2;
		printf("Tong cap so cong : S = %d", sum);
	}
	return 0;
}
