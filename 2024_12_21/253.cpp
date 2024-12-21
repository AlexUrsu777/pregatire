#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    if (n%2==0)
        cout << n+2 << " " << n+4 << endl;
    else 
        cout << n+1 << " " << n+3 << endl;
    return 0;
}