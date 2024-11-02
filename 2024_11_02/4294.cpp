#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,x,y;
    cin>>n;
    for(x=1; x<=(n)/2; x++)
    {
        cout<<x;
        cout<<" ";
        y=n-x;
        cout<<y;
        cout<<endl;
    }
    return 0;
}
