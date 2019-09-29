#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

int main()
{
    char in[100], operasi, bilawal1[10], bilawal2[50];
    int panjang,batas,bilakhir1,bilakhir2;
    float hasil;
    cout << "Input Perhitungan : ";
    cin >> in;
    for(int i=0; i<100; i++)
    {
        if(in[i]=='+')
        {
            operasi = '+';
            batas = i;
        }
        else if(in[i]=='-')
        {
            operasi = '-';
            batas = i;
        }
        else if(in[i]=='/')
        {
            operasi = '/';
            batas = i;
        }
        else if(in[i]=='*')
        {
            operasi = '*';
            batas = i;
        }
    }

    panjang = strlen(in);
    for(int i=0; i<=batas; i++)
    {

        bilawal1[i] = in[i];

    }
    int j=0;
    for(int i=batas+1; i<=panjang; i++)
    {

        bilawal2[j] = in[i];
        j++;

    }
    bilakhir1 = atoi(bilawal1);
    bilakhir2 = atoi(bilawal2);

    if      (operasi=='+')
    {
        hasil = bilakhir1 + bilakhir2;
    }
    else if(operasi=='-')
    {
        hasil = bilakhir1 - bilakhir2;
    }
    else if(operasi=='*')
    {
        hasil = bilakhir1 * bilakhir2;
    }
    else if(operasi=='/')
    {
        hasil = (float)bilakhir1 / bilakhir2;
    }

    cout << "Angka 1 = "   << bilakhir1;
    cout << "\tAngka 2 = "   << bilakhir2<<endl;;
    cout << "Operasi = "   << operasi;
    cout << "\tHasil   = "   << hasil;
}
