#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, min;
    cin >> a>> b>> c;
    min = a;
    if(b<min)
        min = b;
    if(c<min)
        min = c;
    cout << min << endl;
    return 0;
}
