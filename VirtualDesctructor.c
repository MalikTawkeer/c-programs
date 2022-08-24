//understanding virtual destructor 
#include<stdio.h>
 class BaseClass
{
    public:
    BaseClass()
    {cout<<"Constructing BaseClass";}
    ~BaseClass()
    {cout<<"destructing BaseClass"}
};
class DerivedClass: public BaseClass
{
    public:
    DerivedClass()
    {cout<<"Constructing BaseClass";}
   ~DerivedClass()
    {cout<<"destructing BaseClass"}
};
int main()
{

}