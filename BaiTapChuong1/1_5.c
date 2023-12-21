#include <stdio.h>

int main(){
//khai bao 4 so nguyen
	int a, b, c, d;
	printf("Nhap lan luot 4 so nguyen: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
//khai bao bien max va dung toan tu 3 ngoi
	int max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	max = (max > d) ? max : d;
//kiem tra dieu kien 4 so bang nhau va in ra ket qua
	if(a == b && b == c && c == d){
		printf("Khong co gia tri lon nhat");
	}else{
		printf("Gia tri lon nhat la: %d", max);
	}
	return 0;
}
