#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int b ,s, c, p, rest;
    cin >> b >> s;
    c = s/b;
    rest = s%b;
    p = b-rest;
    cout << c << " " << p << endl;

    return 0;
}