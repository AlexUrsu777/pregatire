#include <iostream>

using namespace std;

int main()
{
    int n, i, j, a[30][30];
    cin >> n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
    {
        a[i][j] = n-j+1;
        if(i == j)
            a[i][j] = 0;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            cout << a[i][j] << " ";
                cout << endl;
    }

    return 0;
}
