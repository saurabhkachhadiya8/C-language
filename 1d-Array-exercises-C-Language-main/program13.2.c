#include<stdio.h>
main(){
	
	int a,b;
	
	printf("Enter the first number : ");
	scanf("%d",&a);
	printf("Enter the second number : ");
	scanf("%d",&b);
	
	for(a;a<=b;a++){
		printf("%d  ",a);
		a+=3;
	}
	
	int first, last, year, i;
    int yr[50];
    int c = 0;

    
    printf("\n\nEnter the first year number: ");
    scanf("%d", &first);
    printf("Enter the last year number: ");
    scanf("%d", &last);

    
    for (year = first; year <= last; year++) {
        if (year % 4 == 0) {
            yr[c] = year;
            c++;
        }
    }

    printf("The array is: ");
    for (i = 0; i < c; i++) {
        printf("%d  ", yr[i]);
    }
	
}
