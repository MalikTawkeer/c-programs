//program to count no of vowels in FILE
#include<stdio.h>

int countVowelsInFile(FILE *p)
{
    int tempCount=0;
    char ch;
    while((ch=fgetc(p)) != EOF)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
        ch=='A'|| ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
            tempCount++;
        }
    }
    return tempCount;
}

int main()
{
    FILE *ptr=NULL;
    int vCount;
    ptr=fopen("countNoOfLInesInFile.c","r");
    if(ptr== NULL)
    {
        printf("FILE DOES'T exist!!");
    }
    vCount=countVowelsInFile(ptr);  //function call
    printf("\nNo. OF VOWELS IN A FILE ARE:- %d",vCount);
}