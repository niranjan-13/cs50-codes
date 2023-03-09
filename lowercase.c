#include<stdio.h>
#include<string.h>

int main(void)
{
    char name[20];
    puts("Enter :");
    fgets(name,sizeof(name),stdin);


    for(int i=0; i<sizeof(name);i++)
    {
        if(name[i] >= 'A' && name[i] <= 'Z')
        {
            printf("%c",name[i]+32);
        }
        else
        {
        printf("%c",name[i]);
        }
    }

    return 0;
}