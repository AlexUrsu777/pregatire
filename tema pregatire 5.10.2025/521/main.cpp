#include <iostream>
using namespace std;

int main()
{
    int n, x[1005], k;
    cin  >> n >> k;
    for(int i = 1 ; i <= n ; ++ i)
        cin >> x[i];
    int p = 0, q = 0;
    for(int i = 1 ; i < k && !p ; ++i)
        for(int j = i + 1 ; j <= k && !p; j ++)
        {
            int ok = 1;
            for(int v = 1; v <= n/k; v ++)
                if(x[(i - 1) * (n / k) + v] != x[(j - 1) * (n / k) + v])
                    ok = 0;
            if(ok)
                p = i, q = j;
        }
    if(p)
        cout << p <<" "<< q;
    else
        cout << "NU";
    return 0;
}
