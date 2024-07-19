#include <stdio.h>
main(){
	
    char ch = 'A';
    int num = 2, i, j, n;
    
    printf("Enter any number : ");
	scanf("%d",&n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            if (i % 2 == 1) {
                if (j % 2 == 1) {
                    printf("%c ", ch++);
                } else {
                    printf("%d ", num++);
                }
            } else {
                if (j % 2 == 0) {
                    printf("%c ", ch++);
                } else {
                    printf("%d ", num++);
                }
            }
        }
        printf("\n");
    }
    
}
