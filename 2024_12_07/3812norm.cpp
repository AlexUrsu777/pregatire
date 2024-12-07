#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c, sp;
    float x, ar;
    int ca, cb, cc;
    cin >> a>>b>>c; 
    ca = a;
    cb = b;
    cc = c;
    if(ca>cb)
    {
        swap(ca,cb);
    }                                                                                                                                                                                                                                                                                                                                                                                                                                                        
    if(ca>cc)
    {
        swap(ca,cc);
    }
    if(cb>cc)
    {
        swap(cb,cc);
    }    
    if(ca+cb<=cc)
    {
        cout<<"Imposibil";
        return 0;
    }
    cout << fixed << setprecision(2);
    sp = (a+b+c)/2;
    ar = sqrt(sp*(sp-a)*(sp-b)*(sp-c));
    cout << 2*ar/b<< " " << 2*ar/c<< " " << 2*ar/a<< endl;
    
    return 0;
}