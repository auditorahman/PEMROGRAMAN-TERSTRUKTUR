#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Input Batas : ";
    cin>>n;

    for(int i=n; i>=1; i--){
        for(int j=1; j<n*2; j++)
        if(j==i){
            cout<<"*";
        }
        else if(j==i+1){
            cout<<"-";
        }
        else if(j==n*2-i){
            cout<<"*";
        }
        else if(j==n*2-i-1){

            cout<<"-";
        }
        else{
            cout<<"-";
        }
        cout<<endl;
    }
}
