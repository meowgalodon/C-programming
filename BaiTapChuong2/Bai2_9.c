//Bai 2.9 : Kiem tra so nguyen to
#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Moi ban nhap so nguyen n : ");
	scanf("%d", &n);
	if(n < 2){
		printf("%d khong phai la so nguyen to!!!", n);
	}else{
		int i;
		int mark = 1;
		for(i = 2 ; i <= sqrt(n) ; i++){
			if(n % i == 0){
				mark++;
			}
		}
		if(mark != 1){
			printf("%d khong phai la so nguyen to!", n);
		}else{
			printf("%d la so nguyen to!", n);
		}
	}
	return 0;
}
