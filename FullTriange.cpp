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
        for(int k=0;k<spaces;k++)// This loop is for printing spaces
        {
            cout<<" ";
        }

        
        int no_of_char=2*line-1;
        for(int j=0;j<no_of_char;j++) //This loop is for printing characters
        {
            char ch=(char)('A'+j);
            cout<<ch;
        }
        cout<<endl;
    }

//Loop for lower triangle
for(int line=n+1;line<=2*n-1;line++)
{
    int spaces(line-n);
    for(int k=0;k<spaces;k++)
    {
        cout<<" ";
    }

    int no_of_char=2*(2*n-line)-1;
    for(int j=0;j<no_of_char;j++)
    {
        char ch=(char)('A'+j);
        cout<<ch;
    }
    cout<<endl;

}

    return 0;
}
