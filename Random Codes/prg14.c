#include <stdio.h>
void main(){
    char s[50];
    FILE *fp;
    fp=fopen("akshat.txt", "r");
    fscanf(fp, "%s", s);
    printf("%s\n", s);
}