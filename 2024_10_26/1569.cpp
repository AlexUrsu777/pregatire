#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for(int i = 1; i<=n; i++)
    {
        for(int a = 0; a<i; a++)
        {
            for(int b = 0; b<i; b++)
            {
                cout<<i;
            }
            cout<<endl;
        }
    }
    
    return 0;
}
