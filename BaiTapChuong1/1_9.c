#include <stdio.h>
#include <math.h>

//phuong trinh ax^2 + bx + c = 0

int main(){
//khai bao he so a, b, c	

	float a, b, c, x;
	printf("Nhap he so a, b, c : ");
	scanf("%f%f%f", &a, &b, &c);

//phuong trinh bac 1 khi a = 0

	if (a == 0){
		if(b == 0 && c != 0){
			printf("Phuong trinh vo nghiem!");
		}else if(b == 0 && c == 0){
			printf("Phuong trinh co vo so nghiem!");
		}else{
			x = (-c) / b;
			printf("Phuong trinh co 1 nghiem x duy nhat = %0.2f", x);
		}

//phuong trinh bac 2 khi a != 0		

	}else{
//tinh delta
		float delta = b * b - 4 * a * c;
		if (delta > 0){
			float x1 = ((-b) + delta) / (2 * a);
			float x2 = ((-b) - delta) / (2 * a);
			printf("Phuong trinh co 2 nghiem phan biet : \nx1 = %0.2f\nx2 = %0.2f", x1, x2); 
		}else if(delta == 0){
			x = (-b) / 2*a;
			printf("Phuong trinh co nghiem kep x = %0.2f", x);
		}else{
			printf("Phuong trinh vo nghiem!");
		}
	}
	return 0;
} 
