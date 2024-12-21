#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    if((n%4==0 && n%100!=0)|| (n%400==0))
        cout << "bisect"<< endl;
    else
        cout << "nebisect"<< endl;
    return 0;
}