//Reversing the string given by the user
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"The reversed string is: ";
    for (int i=str.length()-1;i>=0;i--)
    {
        cout<<str[i];
    }
    return 0;
}
/*output:
Enter a string: Tarushi
The reversed string is: ihsuraT
*/
