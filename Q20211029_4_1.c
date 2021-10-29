#include <stdio.h>

int main (void){
    char x[100];
    int i,j;

    gets(x);

    j = 0;
    while(j < 100){
        if (x[j] == '\0') break;
        else j++;
    }

    j--;
    for(i = 0; i <= (j/2); i++){
        if(x[j-i] != x[i]){
            printf("No\n");
            return 0;
        }
    }
    printf("Yes\n");
}