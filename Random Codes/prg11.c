#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30],s2[30];
    int i,j,l1,l2,f=0;
    printf("\t\t\t***INPUT***\t\t\t\n");
    printf("ENTER STRING 1\n");
    gets(s1);
    printf("ENTER STRING 2\n");
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    printf("\t\t\t***OUTPUT***\t\t\t\n");
    if(l1==l2)
    {
        for(i=0;s1[i]!='\0';i++)
        {
            for(j=0;s2[j]!='\0';j++)
            {
               if(s1[i]==s2[j])
               {
                   f=1;
                   break;
               }
               else
               {
                   f=0;
                   break;
               }
            }
        }
        if(f==1)
            printf("STRINGS ARE ANAGRAM\n"); 
        else
printf("STRINGS ARE NOT ANAGRAM\n");
    }
    else
        printf("STRINGS ARE NOT ANAGRAM");
  return 0;
}