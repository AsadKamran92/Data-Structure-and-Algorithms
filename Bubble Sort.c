#include <stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,temp, A[]={90,10,30,50,40,80,100,70,20,60};
    for(i=0;i<10;i++)
        printf(" %d",A[i]);
    printf("\n");
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
            if(A[i]>A[j])
        {
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
        }
    }
    for(i=0;i<10;i++)
        printf(" %d",A[i]);
}
