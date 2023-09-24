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
    for (int j = 0; j < n-1; j++)
    {
        for (int i = j+1; i < n; i++)
        {
            if (a[j]> a[i])
            { 
               int temp=a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    int key;
    cout<<"enter the kth max element you want to find"<<endl;
    cin>>key;
    cout<<"the element is "<<a[n-key];
 return 0;
}