#include<iostream>
using namespace std;

/*Define: - A function is a black box , which takes some input & produces an output after processing.
Return type:- It define the data type and value returned from a function to return a value , we can use a data type (int ,float etc)
Incase function doesn't return any type , we can use void.
*/
int add(int num1 , int num2)
{
    int sum=num1+num2;
    return sum;
}
void fun(string name)
{
    cout<<"Are you good "<<name<<" ? "; //void does not contain return type so we have to print here only.
}

int main()
{
    int num1=10;
    int num2=20;

    cout<<"Addition of both number is: "<<add(num1,num2)<<endl;

    fun("Bhavishya");
    return 0;
} 