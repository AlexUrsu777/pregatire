#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t,i;
    float x,y;
    cin>>x>>t>>y;
    i = 0;
    while(not(x<=y))
    {
        i = i+t;
        x = x - 0.25 * x;
    }
    cout<<i<<endl;

    return 0;
}
