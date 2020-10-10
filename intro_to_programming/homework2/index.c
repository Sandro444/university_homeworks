#include <stdio.h>

int num;

int main(){
    printf("write number\n");
    scanf("%d", &num);
    printf("%d", num >= 100 && num < 1000 && num % 5 == 0 || num >= 10000 && num < 100000 && num % 7 == 0);
    return 0;
}
