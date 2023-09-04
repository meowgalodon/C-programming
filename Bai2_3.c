#include <stdio.h>

int main(){
	unsigned int n;
	printf("Nhap so tu nhien n : ");
	scanf("%d", &n);
	unsigned int i;
	float sum = 0;
	
	for(i = 1; i <= n; i++){
		sum += (float)1/i;
	}
	printf("S = %0.2f", sum);
	
	return 0;
}
