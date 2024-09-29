#include <iostream>
using namespace std;
void findIntersection(int set1[],int set2[], int n1,int n2)
{
    int i,j,k=0,set3[100];
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(set2[i]==set1[j])
            set3[k]=set2[i];
        }
    }
    int len=sizeof(set3)/sizeof(set3[0]);
    cout<<"The Intersection of the 2 arrays is: ";
    for(i=0;i<len;i++)
    cout<< set3[i] <<" "; 
}
int main()
{
    int a1[100],a2[100],n1,n2,i;
    cout<< "Enter n1 and n2" << endl;
    cin>> n1,n2;
    cout<<"Enter elements in a1"<<endl;
    for(i=0;i<n1;i++)
    cin>> a1[i];
    cout<<"Enter elements in a2"<<endl;
    for(i=0;i<n2;i++)
    cin>> a2[i];
    if(n1>=n2)
    findIntersection(a1,a2,n1,n2);
    else 
    findIntersection(a2,a1,n2,n1);
    return 0;
}