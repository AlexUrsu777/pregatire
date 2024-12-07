#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    double a;
    cin >> a;
    a = a*10;
    cout << (long long int)(floor(a))%10 << endl;

    return 0;
}