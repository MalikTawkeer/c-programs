//PROGRAM TO COUNT NO. OF LINES IN A FILE
#include<stdio.h>

int main()
{
    FILE *filePointer;//declaring pointer to point file
    int countLine=1;//there is alredy default one line in file
    char ch;
    filePointer=fopen("student.txt","r");

    while( (ch=fgetc(filePointer))  != EOF)
    {
        if(ch=='\n')
        countLine++;
    }
    printf("NUMBER OF LINES IN A FILE ARE:- %d",countLine);
    return 0;
}