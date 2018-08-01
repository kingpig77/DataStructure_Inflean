#include<stdio.h>

int main(){
    char word[10];
    word[0] = 'h';
    word[1] = 'e';
    word[2] = 'l';
    word[3] = 'l';
    word[4] = 'o';
    word[5] = '\0'; // 배열의 끝을 체크해야하기 때문에 사용

    printf("%s", word);
}