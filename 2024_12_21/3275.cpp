#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, s1, s2, s3, max;
    cin >> a >> b >> c;
    s1 = a%10 + a/10;
    s2 = b%10 + b/10;
    s3 = c%10 + c/10;
    max = s1;
    if (s2 > max)
    max = s2;
    if (s3 > max)
    max = s3;
    if (max == s1)
    cout << a << " ";
    if (max == s2)
    cout << b << " ";
    if (max == s3)
    cout << c << " ";
    cout << endl;
    return 0;
}