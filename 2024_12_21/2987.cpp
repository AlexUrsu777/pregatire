#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    long long int n, a, l, z;
    cin >> n;
    n = n/1000000;
    z = n%100;
    n = n/100;
    l = n%100;
    n = n/100;
    a = n%100;
    n = n/100;
    cout << (a >= 10 ? "" : "0") << a<< " " << (l >= 10 ? "" : "0") << l << " " << (z >= 10 ? "" : "0") << z << endl;

        
    return 0;
}