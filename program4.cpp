#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int sum=0;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter array element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"The array is:"<<endl;
    for(int j=0;j<5;j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl<<"The sum of array elements is:"<<endl;
    for(int k=0;k<5;k++)
    {
        sum=sum+arr[k];
    }
    cout<<sum;
    cout<<endl<<"Average of array elements is: "<<(sum/5);
    }
/* output:
Enter array element 1: 2
Enter array element 2: 3
Enter array element 3: 4
Enter array element 4: 5
Enter array element 5: 6
The array is:
2 3 4 5 6 
The sum of array elements is:
20
Average of array elements is: 4
*/
