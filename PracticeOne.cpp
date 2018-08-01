#include<stdio.h>
#include<string.h>

int main(void)
{
    char buffer[40];
    while (1) {
        printf("$ ");
        fgets(buffer, 40, stdin); //줄 바꿈문자가 나올때까지 입력받는다
        buffer[strlen(buffer) - 1] = '\0'; // 버퍼에 저장된 줄바꿈문자를 널값으로 바꿈
        printf("%s:%d\n", buffer, strlen(buffer));
    }
}