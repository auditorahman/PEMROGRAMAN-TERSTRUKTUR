#include <iostream>

using namespace std;

int main()
{
    int bil;
    cout << "Input bilangan : ";
    cin >> bil;

    int prima = 1;
    for (int i = 2; i < bil; i++)
    {
        if (bil % i == 0) {
            prima = 0;
        }
    }
    if (prima) {
        cout << bil << " = Bilangan prima";
    }
    else {
        cout << bil << " = Bukan bilangan prima";
    }
    return 0;
}
