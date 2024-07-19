#include <stdio.h>

void slength(char str[], int length) {
    length = 0;
    for (length = 0; str[length] != '\0'; (length)++);
    printf("Length is: %d\n", length);
}

int main() {
    char string[100];
    int length;
    printf("Enter any string: ");
    scanf("%s", string);

    slength(string, &length);
    
}
