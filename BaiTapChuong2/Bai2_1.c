#include <stdio.h>

int main(){
	int n;
	printf("Nhap gia tri n > 0 : ");
	scanf("%d", &n);
	if(n <= 0){
		printf("Nhap lai gia tri n > 0!!!");
	}else{
		int i;
		//cac so chan
		printf("Cac so chan la : \n");
		for(i = 0; i < n; i += 2){
			printf("%d ", i);
		}
		
		//cac so le
		printf("\nCac so le la : \n");
		for(i = 1; i < n; i += 2){
			printf("%d ", i);
		}
	}
	return 0;
}
