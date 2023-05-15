#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the digit: ";
    cin>>n;

    for(int line=1;line<=n;line++)
    {
            int no_of_spaces(n-line);
        
            for(int k=0;k<no_of_spaces;k++) //This loop is for printing spaces
            {
                cout<<" ";
            }
        
        int no_of_stars=2*line-1; //This loop is for printing stars
        for(int j=0;j<no_of_stars;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
//Loop for lower triangle
for(int line=n+1;line<=2*n-1;line++)
{
    int no_of_spaces(line-n);
    for(int k=0;k<no_of_spaces;k++)
    {
        cout<<" ";
    }

    int no_of_stars=2*(2*n-line)-1;
    for(int j=0;j<no_of_stars;j++)
    {
        cout<<"*";
    }

    cout<<endl;
}



    return 0;
}
