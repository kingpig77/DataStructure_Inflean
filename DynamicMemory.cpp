#include<stdio.h>
#include<stdlib.h>

int main()
{
    int * p;
    p = (int *)malloc(40);
    if(p==NULL){
        printf("fail!");
        return 0;
    }
}