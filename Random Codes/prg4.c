#include <stdio.h>
void findIntersection(int set1[],int set2[], int n1,int n2)
{
    int i,j,k=0,set3[100];
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(set1[i]==set2[j])
            {set3[k]=set1[i];
            k++;}
        }
    }
    printf("The Intersection of the 2 arrays is: ");
    for(i=0;i<k;i++)
    printf("%d ", set3[i]);
}
void findUnion(int set1[],int set2[],int n1,int n2)
{
    int i=0,set3[100],k,j;
    for(i=0;i<n1;i++)
    set3[i]=set1[i];
    int flag=0;
    k=n1;
    
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(set2[i]!=set1[j])
            flag++;
        }
    if(flag==n1)
    {
        set3[k++]=set2[i];
    }
    }
    printf("\nThe Union of the 2 arrays is: ");
    for(i=0;i<k;i++)
    printf("%d ", set3[i]);

}
void main()
{
    int a1[100],a2[100],n1,n2,i;
    printf("Enter n1 and n2\n");
    scanf("%d%d", &n1,&n2);
    printf("Enter elements in a1\n");
    for(i=0;i<n1;i++)
    scanf("%d",&a1[i]);
    printf("Enter elements in a2\n");
    for(i=0;i<n2;i++)
    scanf("%d",&a2[i]);
    if(n1>=n2)
    {findIntersection(a1,a2,n1,n2);
    findUnion(a1,a2,n1,n2);}
    else 
    {
      findIntersection(a2,a1,n2,n1);
    findUnion(a2,a1,n2,n1);  
    }
}