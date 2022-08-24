#include<stdio.h>
void displayArray(int*,int);

void displayArray(int *arrPtr,int size)
{ 
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",*arrPtr);
        arrPtr++;
    }
}
float mean(int sum,int size)
{

    float tempMean=0.0;
    tempMean=sum/size;
    return tempMean;
}
int sum(int *ptr,int size)
{
    int sum=0,i;
    for(i=0;i<size;i++)
    {
        sum+= *ptr;
        ptr++;
    }
    return sum;

}
int main()
{
    int size=9;
    float aMean=0;
    int aSum=0;
    int arr[9]={1,2,3,4,5,6,7,8,9};
    //displayArray(arr,size);
    aSum=sum(arr,size);
   aMean=mean( aSum,size);
    //aMean=aSum/size;
    printf("sum of array=%d",aSum);
    printf("mean of array=%f",aMean);
   // displayArray();
    return 0;
}