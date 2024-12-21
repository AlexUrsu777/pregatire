#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    if(sqrt(n)==(int)sqrt(n))
        cout << "da" << endl;
    else
        cout << "nu" << endl;
        
    return 0;
}