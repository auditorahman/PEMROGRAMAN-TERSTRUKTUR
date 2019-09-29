#include "ppa uas.h"

using namespace std;

int main()
{
    int a;
    cout << "Masukan Batas Nilai : ";
    cin >> a;
    cout << endl <<  "Fibonacci Biasa                    : ";
    fibonaccibiasa(a);
    cout << endl;
    cout << "Fibonacci Rekursif                 : ";
    for(int i = 0; i < a; i++)
    {
        cout << fibonaccirekursif(i) << " ";
    }
    cout << endl;

    cout << "Ulang? (y/n) : ";
    char z;
    cin >> z;
    if(z == 'y')
        main();
}
