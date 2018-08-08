#include<stdio.h>
typedef int ANY;
typedef char* ANY;

int main(){
    ANY chr;

    scanf("%d", &chr);
    scanf("%s", chr);

    printf("%d %c", chr, chr);
}