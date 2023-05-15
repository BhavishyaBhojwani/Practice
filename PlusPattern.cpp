#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the digit: ";
    cin>>n;

    for(int row=0;row<n;row++)
    {
        for(int column=0;column<n;column++)
        {
            if(row==n/2) 
            {
                cout<<"*";
            }
            else if(column == n/2)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl; 
    }

    return 0;
}