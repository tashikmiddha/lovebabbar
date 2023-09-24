#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the  array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<(n/2);i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    cout<<"the reverse array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
 return 0;
}