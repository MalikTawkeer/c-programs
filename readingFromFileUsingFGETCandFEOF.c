//reading contents of file using fgetc() and feof() functions with while loop
#include<stdio.h>
#include<conio.h>
int main()
{
    FILE *fp;
    char ch;//for storing characters returned by feof() func
    fp= fopen("student.txt","r");
    while(!feof(fp))// will run until end of the file occures
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
  
    fclose(fp);
    return 0;
}