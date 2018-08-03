#include<stdio.h>
#include<string.h>

void compress_line(char str[]);
int main(void)
{
    char str[] = "    Is    it  fun  !  ";
    compress_line(str);
    printf("%s:%d\n", str, strlen(str));
}

void compress_line(char str[])
{
    int i=0, j=0;
    char prev = '\0';

    while(str[i]==' ')
        i++;
    
    while(str[i] != '\0'){
        
        if(str[i] != ' ' || prev != ' '){
            str[j] = str[i];
            j++;
        }
        prev = str[i];
        i++;
    }
    if(prev == ' ')
    j--;
    str[j] = '\0';
}