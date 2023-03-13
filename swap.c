#include<stdio.h>
#include<cs50.h>
#include<string.h>
void swap(int *a,int *b);

int main()
{
    int x = 2;
    int y = 3;
    printf("Before Swap \n x:%d \n y:%d \n",x,y);
    swap(&x,&y);
    printf("After Swap \n x:%d \n y:%d \n",x,y);


    return 0;
}
void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}