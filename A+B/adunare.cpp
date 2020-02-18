#include <iostream>
#include <fstream>
using namespace std;

int main()
{
        int a,b;

        ifstream fin ("adunare.in");
        ofstream fout ("adunare.out");

        fin>>a>>b;
        fout<<a+b;
        return 0;
}
