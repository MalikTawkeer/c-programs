#include<stdio.h>
struct student
{
    char name[10];
    int roll;
    char address[20];
};
int main()
{
    struct student st1;
    struct student *str=NULL;
    //st1.name='m';
    st1.roll=123;
    st1.address='c';
    str=&st1;
    printf("%d",str->roll);
    printf("%s",str->name);
    printf("%s",str->address);
    return 0;


}