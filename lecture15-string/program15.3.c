#include<stdio.h>
main(){
	
	int i;
	char name[20];
	
	printf("Enter your name : ");
	scanf("%s",&name);
	printf("\n");
	
	for(i=0;name[i]!='\0';i++){
		if(name>='65'&&name<='90'){
			name[i]=strlwr(name);
		}else{
			name[i]=strupr(name);
		}
	}
	printf("%s", name);

}
