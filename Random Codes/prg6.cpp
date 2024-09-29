#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,4,5,2,6,7};
    int size=6,i=0,j=0,var,jump=0;
    while(i<size-1)
    {
        var=arr[i];
        if(var!=0)
        {
            jump++,j=var+i,i=j;
        }
        else{
       cout<<"Not Reachable"<<endl;
       exit(0);
        }

    }
    cout<<"Minimum Jumps: "<<jump<<endl;  
    return 0;
}