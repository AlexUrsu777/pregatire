#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,p,i;
    cin>>a>>b;
    p = 1;
    for(i=1; i<=b; i++)
        p = a*p;
    cout<<p<<endl;

    return 0;
}
