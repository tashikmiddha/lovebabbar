#include<iostream>
#include<climits>
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
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>maxi)
        {
            maxi=max(maxi,a[i]);
        }
        if(a[i]<mini)
        {
            mini=min(mini,a[i]);
        }
    }
    cout<<"the maximum and minimum value are "<<maxi<<" and "<<mini<<endl;

 return 0;
}