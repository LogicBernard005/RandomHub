#include <iostream>
using namespace std;
int main()
{
    int a[100], min,max,n,i;
    cout<<"Enter array size\n";
    cin>>n;
    cout<<"Enter Array\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    min=a[0];
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
        if(a[i]>max)
        max=a[i];
    }
    cout<<"Max is: "<<max<<endl;
    cout<<"Min is: "<<min<<endl;
    return 0;
}