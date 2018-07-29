#include<stdio.h>

int main(void){
    FILE * in_fp = fopen("input.txt", "r");
    FILE * out_fp = fopen("input.txt", "w");

    char buffer[100];

    while(fscanf(in_fp, "%s", buffer) != EOF)
        fprintf(out_fp, "%s", buffer);
    
    fclose(in_fp);
    fclose(out_fp);
}