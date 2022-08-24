#include<stdio.h>
int main()
{
    FILE *pf;
    char ch;
    pf=fopen("Employee.txt","r");
    int l=ftell(pf);
    printf("%d",l);
    fseek(pf,3,SEEK_CUR);
    ch=fgetc(pf);
    printf("%c",ch);
   l=ftell(pf);
    printf("%d",l);
}