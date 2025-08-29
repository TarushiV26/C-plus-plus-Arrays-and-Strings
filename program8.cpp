//Checking string is palindrome or not
#include<iostream>
using namespace std;
int main()
{
    int isPalindrome;
    string a;
    cout<<"Enter a string: ";
    cin>>a;
    int n=a.length();
    bool isParindrome=true;
    
    for (int i=0; i<n/2; i++)
    {
        if (a[i]!=a[n-1-i])
        {
            isPalindrome=false;
            break;
        }
    }
    if (isPalindrome)
    {
        cout<<a<<" is a Palindrome";
    }
    else
    {
        cout<<a<<" is not a Palindrome";
    }
}
/* output:
Enter a string: madam
madam is a Palindrome
*/
