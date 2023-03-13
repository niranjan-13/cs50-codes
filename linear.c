#include<stdio.h>
#include<cs50.h>
#include<string.h>
int main(void){

    int mylist[] = {2,1,5,8,6,9,0,3};
    string name[] = {"Sai","Chandu","Gana","Dileep","Jaggu"};


    for(int i=0;i<5;i++)
    {
        if(strcmp(name[i],"Sai") == 0)
        {
            printf("Found \n");
            return 0;
        }
    }
    printf("Not found \n");
    return 1;

}