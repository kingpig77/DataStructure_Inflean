#include<stdio.h>
#include<stdlib.h>

int main()
{
    int * p;
    p = (int *)malloc(40); // 동적 메모리 40바이트크기 할당(배열처럼 사용가능)
    //malloc(4*sizeof(int)) 이런식으로 하는게 이상적임(호환성 목적)
    
    if(p==NULL){
        printf("fail!");
        return 0;
    }
}