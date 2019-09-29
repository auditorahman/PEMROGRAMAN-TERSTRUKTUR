#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

using namespace std;

string output()
{
    string y;
    char a[50];
    char b[50];
    int h;
    cout << "Kata Pertama  : ";
    cin >> a;
    cout << "Kata Kedua    : ";
    cin >> b;
    h=strlen(a);

    for(int i=0; i<h; i++)
    {
        y += a[i];
        y += b[i];
    }
    return y;
}


#endif // HEADER_H_INCLUDED
