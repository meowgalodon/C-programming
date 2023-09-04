#include <stdio.h>

int main(){
	int a, b;
	printf("Nhap 2 so nguyen a va b: ");
	scanf("%d%d", &a, &b);
//so sanh 2 so a va b	
	if (a == b){
		printf("Hai so bang nhau\n");
	}else if (a > b){
		printf("%d > %d\n", a, b);
	}else{
		printf("%d < %d", a, b);
	}
	return 0;
}
