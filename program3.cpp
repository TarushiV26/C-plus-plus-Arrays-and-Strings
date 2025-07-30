#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int rarr[5];
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
    cout<<endl<<"The reversed array is: "<<endl;
    for(int k=0;k<5;k++)
    {
    rarr[k]=arr[4-k];
    }
    for(int l=0;l<5;l++)
    cout<<rarr[l]<<" ";
    
}
/*output:
Enter array element 1: 2
Enter array element 2: 3
Enter array element 3: 4
Enter array element 4: 5
Enter array element 5: 6
The array is:
2 3 4 5 6 
The reversed array is: 
6 5 4 3 2 
  */
