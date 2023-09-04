#include <stdio.h>

int main(){
	int a , b;
	printf("Moi nhap hai so tu nhien a va b : ");
	scanf("%d%d", &a, &b);
	if(a >= 0 && b >= 0){
		if(a == 0 && b == 0){
			printf("Khong ton tai UCLN, BCNN!!!");
		}else if(a == 0 || b == 0){
			printf("Khong co BCNN, UCLN la : %d", (a == 0) ? b : a);
		}else{// a, b > 0
			int boichung = a * b;
			while(a != b){
				if(a > b){
					a = a - b;
				}else{
					b = b - a;
				}	
			}
			
			printf("UCLN : %d", a);
			printf("\nBCNN : %d", boichung / a);
		}
	}else{
		printf("Moi nhap a va b > 0!!!");
	}
	return 0;
}
