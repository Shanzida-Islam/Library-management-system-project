#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n,ans;
        cin>>a>>b>>c>>n;
        ans=a+b+c+n;
        if(ans%3!=0 || ans/3<a || ans/3<b ||ans/3<c )
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
