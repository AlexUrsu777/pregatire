#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, a, b, c;
    cin >> n;
    c = n % 10;
    n = n/10;
    b = n % 10;
    n = n/10;
    a = n%10;
    if (a == b && b == c && a == c)
        cout << "da" << endl;
    else
        cout<< "nu" << endl;
    return 0;
}