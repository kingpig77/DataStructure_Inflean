#include<stdio.h>
#include<string.h>
#define BUFFER_SIZE 100

int main()
{
    char *words[100];
    int n = 0; //nuber of strings, 현재까지 입력받은 문자열의 개수
    char buffer[BUFFER_SIZE];
    while (n<4 && scanf("%s", buffer) != EOF){
        words[n] = strdup(buffer);
        n++;
    }

    for(int i=0; i<4; i++)
    printf("%s\n", words[i]);
}