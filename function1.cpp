#include<iostream>
using namespace std;
int add(int num1 , int num2)
{
    int sum=num1+num2;
    return sum;
}

int add(int num1 , int num2 , int num3)
{
    int sum=num1+num2+num3;
    return sum;
}
float ad(float num1 , float num2)
{
    int sum=num1+num2;
    return sum;
}


int main()
{
    float a=3.0;
    float b=2.0;
    cout<<add(a,b);
    return 0;
}