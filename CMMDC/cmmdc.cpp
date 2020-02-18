#include <iostream>
#include <fstream>

using namespace std;

int main()
{
        int a,b;
        int r;
        ifstream fin ("cmmdc.in");
        ofstream fout ("cmmdc.out");

        fin>>a>>b;

        if (a<b)
        {
                r = a;
                a = b;
                b = r;
        }
        while (b>1)
        {
                r = a % b;
                a = b;
                b = r;
        }

        fout<<a;

        return 0;
}
