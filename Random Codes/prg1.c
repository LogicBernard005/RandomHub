#include <stdio.h>
void main()
{
    int arr[]={7,10,4,3,20,15};
    int k=3,j,key,n=6;
     for(int i=1;i<n;i++)
        {
            key=arr[i];
            j=i-1;
            while(j>=0 && arr[j]>key)
            {
                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=key;
        }
        for(int i =0;i<n;i++)
        printf("%d ", arr[i]); 
        printf("\nKth Smallest Element is %d", arr[k-1]);
}