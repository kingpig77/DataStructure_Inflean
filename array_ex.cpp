#include<stdio.h>

int calculate_sum(int *a);

int main(void)
{
    int sum, i, average;
    int num[10];
    
    for (i = 0; i < 10; i++ )
        scanf("%d", &num[i]);
    
    sum = calculate_sum(num);
    average = sum / 10;
    printf("%d\n", average);
    
    return 0;
}

int calculate_sum(int *array) // int array[] 대신 포인터로 받을수있음
{
    int sum, i;
    sum = 0;

    for(i = 0; i < 10; i++ )
        sum = sum + array[i];
    
    return sum;
}