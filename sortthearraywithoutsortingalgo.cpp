#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int ar[n];
    cout<<"enter the elements(0 ,1 and 2) of the  array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int a=0,b=0,c=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==0)
        {
            a++;
        }
        else if(ar[i]==1)
        {
            b++;
        }
        else if(ar[i]==2)
        {
            c++;
        }
    }
    for(int i=0;i<n;i++)
    {
        ar[i]=0;
    }
    for(int i=a;i<a+b;i++)
    {
        ar[i]=1;
    }
    for(int i=a+b;i<a+b+c;i++)
    {
      ar[i]=2;
    }
    cout<<"the reverse array is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
 return 0;
}