//PROGRAM TO COUNT NO. OF LINES IN A FILE
#include<stdio.h>

int main()
{
    FILE *filePointer;//declaring pointer to point file
    int countWords=1;//there is alredy default one line in file
    char ch;
    filePointer=fopen("abc.txt","r");

    while( (ch=fgetc(filePointer))  != EOF)
    {
        if(ch=='\t' || ch== ' ')
        countWords++;
    }
    printf("NUMBER OF WORDS IN A FILE ARE:- %d",countWords);
    return 0;
}