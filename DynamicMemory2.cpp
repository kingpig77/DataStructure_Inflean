#include<stdlib.h>
#include<stdio.h>

int main()
{
    int * array = (int *)malloc(4*sizeof(int));
    array[0] = 1;
    array[1] = 2;
    *(array+2) = 3;

    int * tmp = (int *)malloc(8*sizeof(int));
    int i;
    for(i=0; i<4; i++)
        tmp[i] = array[i];//array에 저장되있던 값을 더 큰 사이즈의 tmp로 이동

    array = tmp; // tmp의 주소값을 array로 옮김

    array[4] = 4;
    array[5] = 5;

    printf("%d", array[5]);
}