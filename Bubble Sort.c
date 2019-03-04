#include <stdio.h>
#include <stdlib.h>

//Program Bubble sort

int main()
{
    int n,arr[100];
    int i;
    printf("Enter Size of array\n");
    scanf("%d",&n);

    printf("Enter %d Elements in array\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    bubble_sort(arr,n);
    printf("\n");

    for(i=0;i<n;i++)
    printf(" %d",arr[i]);

}

bubble_sort(int arr[],int n)
{
    int round,j,temp;
    for(round=0;round<n-1;round++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }
}
