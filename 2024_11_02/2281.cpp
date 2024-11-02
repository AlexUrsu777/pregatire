#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,i,m,x,g;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(m=0; m<i; m++)
            cout<<" ";
        for(x=1; x<=n; x++)
            cout<<"*";
        cout<<endl;
    }
    for(g=n-2; g>=0; g--)
    {
        for(m=0; m<g; m++)
            cout<<" ";
        for(x=1; x<=n; x++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
