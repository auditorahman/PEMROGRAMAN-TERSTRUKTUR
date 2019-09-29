#ifndef PPA_UAS_H_INCLUDED
#define PPA_UAS_H_INCLUDED
#include <iostream>
using namespace std;

void fibonaccibiasa(int batas)
{
    int sebelum=0, sekarang=1, selanjutnya=0;
    cout <<  sebelum << " " << sekarang <<" ";
    int i = 0;
    while(i < batas-2)
    {
        selanjutnya = sebelum + sekarang;
        cout << selanjutnya << " ";
        sebelum = sekarang;
        sekarang = selanjutnya;
        i++;
    }
}

int fibonaccirekursif(int batas)
{
    if(batas == 0)
    {
        return 0;
    }
    else if(batas == 1)
    {
        return 1;
    }
    else
    {
        return fibonaccirekursif(batas-1) + fibonaccirekursif(batas-2);
    }
}


#endif // PPA_UAS_H_INCLUDED
