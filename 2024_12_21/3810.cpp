#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



int main(int argc, char const *argv[])
{
    int r;
    double A, V;
    cin >> r;
    A = floor(400*M_PI*r*r)/100;
    V = floor((400*M_PI*r*r*r)/3)/100;
    cout << fixed << setprecision(2);
    cout<<A << " " << V << endl;

    return 0;
}
