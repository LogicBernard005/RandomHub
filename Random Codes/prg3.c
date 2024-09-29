#include <stdio.h>
int main()
{
    int j=0;
    int arr[]={1,0,1,1,1,0,2,2,2,0};
    int i;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++)
    {
        if(arr[i]==0)
        {arr[j++]=0;}
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {arr[j++]=1;
    }}
    for(i=0;i<n;i++)
    {
        if(arr[i]==2)
        {arr[j++]=2;}
    }
    for(j=0;j<n;j++)
    {
        printf("%d ", arr[j]);
    }
}