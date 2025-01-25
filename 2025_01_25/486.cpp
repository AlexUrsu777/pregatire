#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i, minim, maxim;
    cin >> n;
    int v[n+1];
    minim = 1000001;
    maxim = -11;
    for (i = 0; i<=n-1; i++){
        cin >> v[i];
        if(v[i] < minim)
            minim = v[i];
        if(v[i] > maxim)
            maxim = v[i];
    }
    cout << minim<<" "<< maxim;
    cout << endl;
    return 0;
}
