#include<iostream>
using namespace std;
 int main()
 {
    int row;
    cout<<"Enter row number: ";
    cin>>row;

    int column;
    cout<<"Enter the column: ";
    cin>>column;

    int i,j;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=column;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
 }