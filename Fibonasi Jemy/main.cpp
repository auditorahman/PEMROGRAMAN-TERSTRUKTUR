#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
   int nilai,fibnxt=0,fiblst=1,a;

   cout <<"Masukkan Batas : ";
   cin  >>fibnxt;
    cout <<"Masukkan Batas : ";
   cin  >>fibnxt;
   a=fibnxt+fiblst;
   fibnxt=fiblst;
   fibnxt=a;
   for (int i=1; i<fibnxt; i++){
        for (int k=1; k<=nilai; k++){
            cout<< " ";
        }
    for (int j=0; j<=i; j++){
        if (j==0||i==j){
            a=fibnxt+fibnxt;
        }else{
            a=a*(i+1-j)/j;
        }
            cout<<"  ";
            cout<<fibnxt;
            cout<<"  ";

    }
   cout<<" ";
   cout<<endl<<endl;
   }
}

