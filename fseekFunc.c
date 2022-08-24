#include<stdio.h>
int main()
{
    FILE *pf;
    char ch;
    pf=fopen("Employee.txt","r");
    fseek(pf,5,SEEK_SET);
    ch=fgetc(pf);
    printf("%c",ch);
    fseek(pf,-2,SEEK_CUR);
    ch=fgetc(pf);
    printf("%c",ch);
    //pointing to a end
    fseek(pf,-7,SEEK_END);
    ch=fgetc(pf);
    printf("%c",ch);
    return 0;
}