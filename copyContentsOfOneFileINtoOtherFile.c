//PROGRAM TO COPY CONTENTS OF ONE FILE INTO ANOTHER FILE
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *source=NULL;
    FILE *destination=NULL;
    char tempChars;
    source=fopen("student.txt","r");
    if(source== NULL)
    {
        printf("SOURCE file doesn't exist!!!\n");
        exit(1);
    }
    destination=fopen("backupStudent.txt","w");
     if(source== NULL)
    {
        printf("DESTINATION file doesn't exist!!!\n");
        exit(1);
    }
    while ((tempChars=fgetc(source)) !=EOF)//while tempChars not equals to end OF file
    {
        fputc(tempChars,destination);
    }
    printf("CONTENTS COPIED SUCCESSFULLY");

    return 0;

}