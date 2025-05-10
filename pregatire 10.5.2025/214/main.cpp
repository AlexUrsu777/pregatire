#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k, uc, cn, a[15][15];
    cin >> n;
    k = 0;
    cn = n;
    do
    {
        k++;
        cn = cn/10;
    }
    while(cn);

    for(j = 1; j<=k; j++)
    {
        uc = n%10;
        for(i=1; i<=k; i++)
            a[i][j] = uc;
        n = n/10;
    }
    for(i = 1; i<=k; i++)
    {
        for(j = 1; j<=k; j++)
            cout << a[i][j] << " ";
    cout << endl;
    }

    return 0;
}
