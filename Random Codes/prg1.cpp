#include <iostream>
using namespace std;
int main()
{
	int arr[100], p, i=0, j=0, len, temp;
	cout<<"Enter Array Length"<<endl;
	cin>>len;
	cout<<"Enter Array"<<endl;
	for(i=0;i<len;i++)
	cin>>arr[i];
	cout<<"Enter position"<<endl;
	cin>>p;
	for(i=p+1,j=len-1;i<(len/2)+p; i++, j--)
	{
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
	for(i=0;i<len;i++)
	cout<<arr[i]<<", ";
	return 0;
}