#include <stdio.h>
//phuong trinh ax + b = 0
int main(){
//nhap he so a va b
	float a, b, x;
	printf("Nhap he so cua x: ");
	scanf("%f", &a);
	printf("Nhap he so tu do b: ");
	scanf("%f", &b);
//chia 3 truong hop
	if(a == 0 && b != 0){
//truong hop 1: vo nghiem
		printf("Phuong trinh vo nghiem!");
	}else if(a == 0 && b == 0){
//truong hop 2: vo so nghiem
		printf("Phuong trinh co vo so nghiem!");
	}else{
//truong hop 3: 1 nghiem duy nhat
		x = (-b) / a;
		printf("Phuong trinh co 1 nghiem x duy nhat = %0.2f", x);
	}
	return 0;
}
