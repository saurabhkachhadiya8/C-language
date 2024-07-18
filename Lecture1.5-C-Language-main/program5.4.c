#include<stdio.h>

main(){
	
	const int tri=180;
	int a = 65 , b = 45 , c;
	
	printf("first angle = %d\n",a);
	
	printf("second angle = %d\n\n",b);
	
	c = tri - (a + b);
	
	printf("so, third angle c = 180 - (a + b) = %d",c);
}
