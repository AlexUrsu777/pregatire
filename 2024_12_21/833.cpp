#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, x, max;
    cin >> a >> b;
    x = abs(a - b);
    if(a-b>0)
        cout<<"Primul copil este mai mare cu" <<" "<< x << " " << "ani" << endl;
    if(a-b<0)
        cout<<"Al doilea copil este mai mare cu" <<" "<< x << " " << "ani" << endl;
    if(a-b==0)
        cout<<"Copiii au varste egale" << endl;
    return 0;
}