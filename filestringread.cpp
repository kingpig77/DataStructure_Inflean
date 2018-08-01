#include<stdio.h>

int main(void){
    FILE *fp = fopen("input.txt", "r");

    char buffer[100];

    while(fscanf(fp, "%s", buffer) != EOF)
        printf("%s\n", buffer);

    fclose(fp);
}