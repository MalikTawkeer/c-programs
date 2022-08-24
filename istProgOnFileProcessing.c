#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    FILE *filePointer=NULL; // stores a file address
    filePointer=fopen("abc.txt","w");
    char ch;
    if(filePointer==NULL)
    {
        printf("file doesn't exist!!\n");
        exit(1);
    }
    printf("ENTER CHARACTER:\n");
    scanf("%c",&ch);
    fputc(ch,filePointer);
    fputs(" malik tawkeer",filePointer);

    fclose(filePointer);
    return 0;
}