#include<stdio.h>
#define BUFFER_SIZE 40

int read_line(char str[], int limit);
int main(void)
{
    char buffer[BUFFER_SIZE];
    while (1) {
        printf("$ ");
        int len = read_line(buffer, BUFFER_SIZE);
        printf("%s:%d\n", buffer, len);
    }
}

int read_line( char str[], int limit){
    int ch, i = 0;

    while((ch=getchar()) != '\n')
    if(i<limit)
    str[i++] = ch;

    str[i] = '\n';
    return i;
}