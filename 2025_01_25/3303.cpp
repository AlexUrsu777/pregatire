#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin ("nrcurat.in");
    ofstream fout ("nrcurat.out"); 
    int x;
    while(fin>>x){
        int n, o=0, u=0, c;
        c = x;
        while(x){
            n = x%10;
            x = x/10;
            o = o*10+n;
            u = u*10+9;
        }
        u = u-c;
        if(o==u)
            fout << 1 <<" ";
        else 
            fout << 0 <<" ";
    }

    
    
    return 0;
}
