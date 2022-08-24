//putting Contents In File Using Func GETS()
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fileAddress;
    char str[12];
    fileAddress=fopen("Employee.txt","a");
    printf("ENTER CONTENTS YOU WANT TO INSERT INTO A FILE");
    gets(str);
    fprintf(fileAddress,"%s",str);
    //fputs(str,fileAddress);
    return 0;
}