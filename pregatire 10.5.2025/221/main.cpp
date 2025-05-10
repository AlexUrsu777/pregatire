#include <iostream>

using namespace std;

int main()
{
    int n, i, j, a[25][25];
    cin >> n; int x = 2;
    for(i = 1; i<=n*n; i++)
    {
        if(x%3 == 0)
            x += 2;
        cout << x << " ";
        x += 2;
        if(i%n == 0)
            cout << endl;
    }
    return 0;
}
