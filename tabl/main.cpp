#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
const int z = 9;
const int y = 9;
int a[z][y];
int s = 1, n = 1;

for(int i = 0; i < z; ++i)
    {
    for(int j = 0;j < y;++j)
    {
        a[i][j] = s*n;
        n++;
        cout << a[i][j] << "\t";
    }
    n = 1;
    s++;
    cout << endl;
}

system("pause");
}
