#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x, y, n, k=0;
    char a[3]= {'f','o','o'};

    cout << "X : ";
    cin>>x;
    cout << "Y : ";
    cin>>y;
    cout << "N : ";
    cin>>n;

    int l=ceil((y-x)/n)+1;

    for(int j=x; j<=y; j++)
    {
        if(j % n == 0)
        {
            cout << a[k]<<" ";
            k = k + 1;
            if(k == 3)
            {
                k = 0;
            }
            else if((j+1-x) % l == 0)
            {
                cout << endl;
            }
        }
        else if(j%n!=0)
        {
            cout << j%n<<" ";
            if((j+1-x)%l==0)
            {
                cout << endl;
            }
        }
    }
}
