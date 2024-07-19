#include<stdio.h>
main(){
	
	int i,sum=0;
	char name[20];
	
	printf("Enter your name : ");
	scanf("%s",&name);
	printf("\n");
	
	for(i=0;name[i]!='\0';i++){
		printf("ascii value of %c is %d\n",name[i],name[i]);
		sum+=name[i];
	}
	
	printf("\nsum is : %d",sum);

}
