#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,l=0,k=0,j=0;
    int a[3];
    cin>>n;
    while(n--)
    {
        for(i=0; i<3; i++)
        {
            cin>>a[i];
            if(i==0)
            {
                l=l+a[i];
            }
            else if(i==1)
            {
                k=k+a[i];
            }
            else if(i==2)
            {
                j=j+a[i];
            }
        }
    }
    if(l==0 && k==0 && j==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
