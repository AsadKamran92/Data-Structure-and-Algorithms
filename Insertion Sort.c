#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, arr[]={10,40,50,20,70,60,90,80};
    insertsort(arr,8);

    for ( i=0 ; i < 8 ; i++)
        printf(" %d",arr[i]);

}

void insertsort(int arr[],int N)
{
    int i,j,buffer;
    for(i=1;i<N;i++)
    {
        buffer=arr[i];
        for (j=i-1;j >= 0 && buffer<arr[j] ;j--)
        {
            arr[j+1] = arr[j];
                             }
            arr[j+1]=buffer;

    }



}
