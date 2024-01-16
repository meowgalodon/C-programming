#include <stdio.h>

//Tinh tong cac chu so
int main()
{
	int n;
	printf("Hay nhap so nguyen n: ");
	scanf("%d", &n);
	int temp = n;
	if(n < 0)
	{
		n *= -1;
	}
	
	int sum = 0;
	while(n > 0)
	{
		sum += n  % 10;
		n /= 10;
	}
	
	printf("Tong cac chu so cua %d la: %d", temp, sum);
	return 0;
}
