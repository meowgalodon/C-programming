#include <stdio.h>

int main(){
	float width, height;
	printf("Nhap 2 canh hinh chu nhat: ");
	scanf("%f%f", &width, &height);
	if(width > 0 && height > 0){
		float chuvi = (width + height) * 2;
		float area = width * height;
		
		printf("Chu vi hinh chu nhat la : (%0.2f + %0.2f) * 2 = %0.2f \n", width, height, chuvi);
		printf("Dien tich hinh chu nhat la : %0.2f * %0.2f = %0.2f \n", width, height, area);
	}else{
		printf("Vui long nhap canh > 0!");
	}
	return 0;
}
