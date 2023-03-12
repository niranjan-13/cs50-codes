#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int draw(int h);
int main(void)
{   int n;
    printf("Enter size:");
    scanf("%d",&n);
    draw(n);
    return 0;
}

int draw(int h)
{
    if(h==0)
    {
        return 0;
    }
    draw(h-1);
    for(int i=0;i<h;i++)
    {
        printf("#");
    }
    printf("\n");

}