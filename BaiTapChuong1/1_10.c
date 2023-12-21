#include <stdio.h>
#include <math.h>

//kiem tra 3 so co tao nen 1 tam giac

int main(){
	float a, b, c;
	printf("Nhap 3 canh cua tam giac : ");
	scanf("%f%f%f", &a, &b, &c);
	if (a > 0 && b > 0 && c > 0){
			if (abs(a - c) < b && b < (a + c)){
			printf("Ba so tao nen 1 tam giac");
		}else{
			printf("Ba so khong tao nen 1 tam giac");
		}
	}else{
		printf("Ba canh phai > 0!");
	}
	return 0;
}
