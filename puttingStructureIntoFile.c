//PUTTING STRUCTURE INTO A A FILE
#include<stdio.h>
#include<conio.h>
struct student
    {
        char name[30];
        int age;
        int rollno;
        char address[30];
    };
int main()
{
    FILE *fptr=NULL;
    int n;
    struct student stu;
    fptr=fopen("student.txt","a");
    printf("***************************Enter details of Student:-************************************");
    scanf("%s %d %d %s",stu.name,&stu.age,&stu.rollno,stu.name);
    fprintf(fptr,"\n*********STUDENT_INFORMATION*******\n\n");
    fprintf(fptr,"Name:-\t %s\nAge:-\t%d\nRoll_no:-\t%d\nAddress:-\t%s",stu.name,stu.age,stu.rollno,stu.name);
    //n=fcloseall(void);
    printf("\n\nNO of files closed:- %d",n);
    return 0;
}