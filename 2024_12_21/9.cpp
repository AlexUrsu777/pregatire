#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, min, max;
    cin >> a >> b >> c;
    min = a;
    if (b<min)
    min = b;
    if (c<min)
    min = c;
    max = a;
    if (b>max)
    max = b;
    if (c>max)
    max = c;
    cout << max - min << endl;
    return 0;
}