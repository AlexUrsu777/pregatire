#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, i, kp, ki;
    kp = 0;
    ki = 0;
    cin >> n;
    int v[n-1];
    for (i=0; i<=n-1; i++){
        cin >> v[i];
        if(v[i]%2==0)
            kp++;
        if(v[i]%2!=0)
            ki++;
    }
        cout << abs(kp-ki) << endl;
    return 0;
    
}
