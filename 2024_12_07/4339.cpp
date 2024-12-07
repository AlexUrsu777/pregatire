#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, k;
    cin >> a>> b>> c;
    k = 0;
    if (a%2==0)
        k++;
    if (b%2==0)
        k++;
    if (c%2==0)
        k++;
    if(k>=2)
        cout<<"pare"<<endl;
    else
        cout<<"impare"<<endl;
    
    return 0;
}
