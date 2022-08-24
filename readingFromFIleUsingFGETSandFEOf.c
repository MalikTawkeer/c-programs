// reading contents of file using fgetc() and feof() functions with while loop.c
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp=NULL;
    char str[200];
    fp=fopen("countNoOfLInesInFile.c","r");
    if(fp==NULL)
    {
        printf("FILE DOES NOT EXIST!!");
    }
    while(!feof(fp))
    {
    fgets(str,20,fp);
    printf("%s",str);
    }
}