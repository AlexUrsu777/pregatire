#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, c, k;
    cin >> n;
    k = 0;
    while (n != 0){

        c = n % 10;
    if (c % 2 != 0)
        k++;
    n = n / 10;
    }
    cout << k<< endl;
    return 0;
}