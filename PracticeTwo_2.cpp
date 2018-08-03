#include<stdio.h>
#include<string.h>
#define BUFFER_MAX 20

int main(void)
{
    char ch, prev='\0';
    char str[BUFFER_MAX];
    int i=0;
    while((ch = getchar()) == ' ')
    while(ch != '\n'){
        if(i<BUFFER_MAX-1 && !(prev == ' '&&ch==' '))
        str[i++] = ch;
    prev = ch;
    ch = getchar();
    }
}