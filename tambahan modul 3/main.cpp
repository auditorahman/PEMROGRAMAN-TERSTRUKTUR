#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

using namespace std;

int main()
{
    char in[100],opr1='\0',opr2='\0',d[10],e[50],f[50];
    int panjang,batas1;
    float batas2,m,n,o;
    float hasil, hasil1, hasil2;
    cout<<"Input : ";
    cin>> in;
    for(int i=0; i<strlen(in); i++)
    {
        if(in[i]=='+')
        {
            opr2 = '+';
            batas1 = i;
        }
        else if(in[i]=='-')
        {
            opr2 = '-';
            batas1 = i;
        }
        else if(in[i]=='/')
        {
            opr2 = '/';
            batas1 = i;
        }
        else if(in[i]=='*')
        {
            opr2 = '*';
            batas1 = i;
        }
    }
    for(int i=0; i<batas1; i++)
    {
        if(in[i]=='+')
        {
            opr1 = '+';
            batas2 = i;
        }
        else if(in[i]=='-')
        {
            opr1 = '-';
            batas2 = i;
        }
        else if(in[i]=='/')
        {
            opr1 = '/';
            batas2 = i;
        }
        else if(in[i]=='*')
        {
            opr1 = '*';
            batas2 = i;
        }
    }

    panjang=batas1;
    for(int i=0; i<=batas2; i++)
    {
        if(i==batas2)
        {
            d[i] = '\0';
        }
        else
        {
            d[i] = in[i];
        }
    }
    int j=0;
    for(int i=batas2+1; i<=panjang; i++)
    {
        if(i==panjang)
        {
            e[j] = '\0';
        }
        else
        {
            e[j] = in[i];
            j++;
        }
    }
    panjang=strlen(in);
    j=0;
    for(int i=batas1+1; i<=panjang; i++)
    {
        if(i==panjang)
        {
            f[j] = '\0';
        }
        else
        {
            f[j] = in[i];
            j++;
        }
    }
    m=atof(d);
    n=atof(e);
    o=atof(f);

    if(opr1=='+')
    {
        hasil=m+n;
    }
    else if(opr1=='-')
    {
        hasil=m-n;
    }
    else if(opr1=='*')
    {
        hasil=m*n;
    }
    else if(opr1=='/')
    {
        hasil=m/n;
    }

    if(opr2=='+')
    {
        hasil1=hasil+o;
    }
    else if(opr2=='-')
    {
        hasil1=hasil-o;
    }
    else if(opr2=='*'&&opr1=='+')
    {
        hasil1=(hasil-m)*o+m;
    }
    else if(opr2=='*'&&opr1=='-')
    {
        hasil2=n*o;
        hasil1=m-hasil2;
    }
    else if(opr2=='*'&&opr1=='*')
    {
        hasil1=hasil*o;
    }
    else if(opr2=='*'&&opr1=='/')
    {
        hasil1= hasil*o;
    }
    else if(opr2=='/'&&opr1=='+')
    {
        hasil1=(hasil-m)/o+n;
    }
    else if(opr2=='/'&&opr1=='-')
    {
        hasil1=m-(n/o);
    }
    else if(opr2=='/'&&opr1=='*')
    {
        hasil1=hasil/o;
    }
    else if(opr2=='/'&&opr1=='/')
    {
        hasil1=hasil/o;
    }

    cout<<"Angka 1   = "<<m;
    cout<<"\tAngka 2   = "<<n;
    cout<<"\tAngka 3 = "<<o<<endl;
    cout<<"Operasi 1 = "<<opr1;
    cout<<"\tOperasi 2 = "<<opr2;
    cout<<"\tHasil   = "<<hasil1<<endl;
}
