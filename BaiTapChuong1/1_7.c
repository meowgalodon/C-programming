#include <stdio.h>
#include <math.h>

int main(){
	float r;
	printf("Nhap ban kinh hinh tron: ");
	scanf("%f", &r);
	if(r > 0){
		float chuvi = 2 * r * M_PI;
		float area = pow(r,2) * M_PI;
		printf("Chu vi hinh tron la: %0.2f\n", chuvi);
		printf("Dien tich hinh tron la: %0.2f", area);
	}else{
		printf("Ban kinh hinh tron phai > 0!");
	}
	return 0;
}
