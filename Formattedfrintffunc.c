// putting data into a file using fprintf() method
#include<stdio.h>
#include<conio.h>
int main()
{
    char name[10];
    int age;
    FILE *filePtr=NULL;
    filePtr=fopen("name.txt","a");
    printf("Enter your name and age:-");
    scanf("%s %d",name,&age);
    // putting data entered recently into file namely name.txt
    fprintf(filePtr,"My Details:\nNAME is:- %s \nAGE is:- %d",name,age);
    return 0;
}