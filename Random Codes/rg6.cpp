#include <iostream>
using namespace std;
int main()
{
    int arr[]={-2,-3,4,-1,-2,1,5,-3};
    int size=8;
    int N=5;
    int max_sum=0,sum=0,i,j,k;
    for(i=0;i<N;i++)
    max_sum+=arr[i];
    cout<<max_sum<<endl;
    for(i=1;(size-i)>=N;i++)
    {
        sum=0;
        for(j=i,k=1;k<=N;j++,k++)
        {
            sum+=arr[j];
        }
        if(max_sum<sum)
            max_sum=sum;
    }
    cout<<max_sum;
    return 0;
}