#include<stdio.h>
#include<stdlib.h>
int insertionsort(int*,int);
int insertionsort(int *arr,int n)
{
    int i,j,temp;
for(i=1;i<n;i++)
    {
        temp=*(arr+i);
        j=i-1;
        while(temp<*(arr+j)&&j>=0)
        {
            *(arr+(j+1))=*(arr+j);
            j--;
        }
        *(arr+(j+1))=temp;
    }
    return 0;
}
int main()
{
    int *arr,i,n;
    printf("Enter the no. of elements\n");
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    printf("Enter elements\n");
    for(i=0;i<n;i++)
        scanf("%d",(arr+i));
    insertionsort(arr,n);
    printf("Sorted array is\n");
    for(i=0;i<n;i++)
        printf("%d\n",*(arr+i));
    return 0;
}
