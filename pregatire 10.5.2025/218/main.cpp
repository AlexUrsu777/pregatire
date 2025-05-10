#include <iostream>

using namespace std;

int main()
{
    int n, i, j, a[30][30] = {0};
    cin >> n;
    for(i = 1; i<=n; i++)
    {
        a[i][1] = 1+i;
        a[i][n] = n+i;
    }
    for(j = 1; j<=n; j++)
    {
        a[1][j] = 1+j;
        a[n][j] = n+j;
    }
    for(i = 2; i<=n-1; i++)
        for(j = 2; j<=n-1; j++)
        {
            a[i][j] = a[i-1][j] + a[i-1][j+1] + a[i-1][j-1];
        }
    for(i = 1; i<=n; i++)
    {
        for(j = 1; j<=n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
