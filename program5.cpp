#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int max=0;
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
    for(int k=0;k<5;k++)
    {
        if(arr[k]>max)
        max=arr[k];
    }
    cout<<endl<<"Highest element in array is: "<<max;
    int min=max;
    for(int l=0;l<5;l++)
    {
        if(arr[l]<min)
        min=arr[l];
    }
    cout<<endl<<"Lowest element in array is: "<<min;
}
/* output:
Enter array element 1: 34
Enter array element 2: 78
Enter array element 3: 12
Enter array element 4: 98
Enter array element 5: 10
The array is:
34 78 12 98 10 
Highest element in array is: 98
Lowest element in array is: 10
*/
