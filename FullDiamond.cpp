#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter your digit: ";
    cin>>n;

    for(int line=1;line<=n;line++)
    {
        int spaces(n-line);
        for(int k=0;k<spaces;k++)
        {
            cout<<" ";
        }

        int no_of_letters=2*line-1;
        for(int j=1;j<=no_of_letters;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }

    for(int line=n+1;line<=2*n-1;line++)
    {
        int spaces(line - n); //6-5=1 , 7-5=2 , 8-5=3 
        for(int k=0;k<spaces;k++)
        {
            cout<<" ";
        }

        int no_of_letter=2*(2*n-line)-1; //2*(2*5-6)-1=7 , 2*(2*5-7)-1=5 , 2*(2*5-8)-1=3 , 2*(2*5-9)-1=1
        for(int j=1;j<=no_of_letter;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;

}