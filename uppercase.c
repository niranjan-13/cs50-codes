#include<stdio.h>
#include<stdlib.h>
#include<cs50.h>
#include<string.h>


int main(void)
{

    char name[10];

    printf("Enter:");
    scanf("%s",name);
    for(int i=0;i<sizeof(name);i++)
    {
        if(name[i]>='a' && name[i] <= 'z')
        {
            printf("%c",name[i]-32);
        }
        else
        {
            printf("%c",name[i]);
        }

    }
    printf("\n");
    return 0;
}