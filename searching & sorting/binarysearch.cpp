#include<bits/stdc++.h>
using namespace std;
int bs(int *a, int n, int key)
{
    int b=1,e=n,mid,f=-1;
    while(b<=e)
    {
        mid=(b+e)/2;
        if(key==a[mid])
        {
            f=mid;
            return f;
        }
        else if(key>a[mid])
        {
            b=mid+1;
        }
        else 
        {
            e=mid-1;
        }
        return f;
    }
}
int main()
{
    int n,key,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>key;
    cout<<bs(a,n,key);
}