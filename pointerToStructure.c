#include<stdio.h>
struct student
{
    char name[30];
    int roll;
    char address[50];
};

void getDetails(struct student *ptr)
{
    int i;
    printf("\n **************ENter details of student***********");
    for(i=0;i<3;i++)
    {
        printf("\nEnter name of student[%d]:- ",i+1);
        scanf("%s",*ptr->name);
        printf("\nEnter roll no of student[%d]:- ",i);
        //scanf("%d",*ptr->roll);
        printf("\nEnter address of student[%d]:- ",i);
        scanf("%s",*ptr->address);
    }
}

int main()
{
    struct student stu[3];
    getDetails(stu);
    return 0;
}