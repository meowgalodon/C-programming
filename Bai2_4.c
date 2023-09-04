#include <stdio.h>

//Tinh tong cac so tu nhien khong lon hon n (<=n) 

int main(){
	int n;
	printf("Nhap so tu nhien n : ");
	scanf("%d", &n);
	if(n <= 0){
		printf("Vui long nhap so tu nhien n > 0!!!");
	}else{
		unsigned int i;
	//Cach 1:
//		int s = 0;		
//		for(i = 1 ; i <= n ; i++){
//			s += i;
//		}
//		
//		int s1 = 0;
//		for(i = 1 ; i <= n ; i += 2){
//			s1 += i;
//		}
//		
//		int s2 = 0;
//		for(i = 2 ; i <= n ; i += 2){
//			s2 += i;
//		}
//		
	//Cach 2:
		unsigned s = 0, s1 = 0, s2 = 0;
		for(i = 1 ; i <= n ; i++){
			s += i;
			if(i % 2 != 0){
				s1 += i;
			}else{
				s2 += i;
			}
		}	
		printf("Tong cac so tu nhien <= n la : \nSum = %d", s);
		printf("\nTong cac so tu nhien le <= n la : \nSum1 = %d", s1);
		printf("\nTong cac so tu nhien chan <= n la : \nSum2 = %d", s2);
	}
	return 0;
}
