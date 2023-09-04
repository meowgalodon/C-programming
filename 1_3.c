#include <stdio.h>

int main(){
//khai bao 2 so nguyen 
	int a, b;
	printf("Nhap lan luot 2 so nguyen a va b: ");
	scanf("%d%d", &a, &b);
//khai bao gia tri cua tong, hieu, tich, thuong
	int tong, hieu, tich;
	float thuong;
//tinh toan
	tong = a + b;	
	hieu = a - b;
	tich = a * b;
//in ra man hinh cac ket qua	
	printf("%d + %d = %d\n", a, b, tong);
	printf("%d - %d = %d\n", a, b, hieu);
	printf("%d * %d = %d\n", a, b, tich);
//kiem tra xem mau == 0?	
	if (b == 0){
		printf("Khong thuc hien duoc phep chia!");
	}else{
		thuong = (float)a / b;
		printf("%d / %d = %0.2f", a, b, thuong);
	}	
	return 0;
}
