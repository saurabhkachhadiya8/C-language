#include<stdio.h>
main()
{
	
	int i,n,sum,a,b,ans;
	
	printf("Enter the starting point : ");
	scanf("%d",&i);
	printf("Enter the ending point : ");
	scanf("%d",&n);
	
	while(i <= n){
		
		printf("%d\t",i);
		sum+=i;
		i++;
		
		
	}
	printf(" = %d",sum);
	
	printf("\n\nEnter the starting point : ");
	scanf("%d",&a);
	printf("Enter the ending point : ");
	scanf("%d",&b);
	
	while(a >= b){
		
		printf("%d\t",a);
		ans+=a;
		a--;
		
		
	}
	printf(" = %d",ans);
	
}
