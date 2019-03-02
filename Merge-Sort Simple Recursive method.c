#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr1[20];
    int i,n;
    printf("Enter Number of Elements in the array:\n");
    scanf("%d",&n);

    printf("Enter %d Integers\n",n);

    for(i = 0 ; i < n; i++)
    scanf("%d",&arr1[i]);

    sort(0,n,arr1);
         printf("Printing Sorted Elements\n");
         for (i=0; i<n ; i++)
         printf(" %d",arr1[i]);
         return 0;
}

void sort(int start , int end , int arr1[])
{
    if(start==end)
        return;


        int mid = (start + end) / 2 ;
        sort(start,mid,arr1);//Important Recursion to Break the Array
        sort(mid+1,end,arr1);//Important Recursion to Break the Array
        merge(start,mid,mid+1,end,arr1);

}
merge(int left_start , int left_end, int right_start, int right_end ,int arr1[])
{
    int left_pointer = left_start;
    int right_pointer = right_start;
    int Pointer = left_start;
    int arr2[20];

    while (left_pointer <= left_end && right_pointer <= right_end)
    {
        if(arr1[left_pointer] > arr1[right_pointer])
        {
            arr2[Pointer]=arr1[right_pointer];
            Pointer++;
            right_pointer++;
        }
        else
        {
            arr2[Pointer]=arr1[left_pointer];
            Pointer++;
            left_pointer++;

        }
    }


        if(left_pointer > left_end)
        {
            while(right_pointer <= right_end)
            {
                arr2[Pointer] = arr1[right_pointer];
                right_pointer++;
                Pointer++;
            }
        }
        else{
            while(left_pointer <= left_end)
            {
                arr2[Pointer]=arr1[left_pointer];
                left_pointer++;
                Pointer++;
            }
        }


int i;
for(i=left_start; i<=right_end;i++)
{
    arr1[i] = arr2[i];
}
}






