//ENTER STRING INTO FILE
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *ptr=NULL;
    char str[30]="malik ";
    char ch='a';
    ptr=fopen("name.txt","w");
    // METHOD FOR PUTTING A STRING INTO FILE
    fputs(str,ptr);
    // fputs("malik tawkeer",ptr);
    //  METHOD FOR PUTTING A SINGLE CHARACTER INTO FILE
    fputc(ch,ptr);
    //fputs('a',ptr);
    return 0;
}