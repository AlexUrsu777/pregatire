#include <iostream>

using namespace std;

int main()
{
    int n, i, j, a[30][30];
    cin >> n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
        {
            if( i == j || i+j == n+1)
                a[i][j] = 0;
            else if(i+j <= n && j>i)
                a[i][j] = 1;
            else if(i+j > n+1 && j<i)
                a[i][j] = 2;
            else
                a[i][j] = 3;
        }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
