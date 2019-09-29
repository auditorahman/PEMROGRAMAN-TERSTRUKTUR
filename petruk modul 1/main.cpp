#include <iostream>

using namespace std;

int main()
{
    int motor, mobil;
    cout << "Masukkan jumlah motor yang parkir dalam sehari : ";
    cin >> motor;
    cout << "Masukkan jumlah mobil yang parkir dalam sehari : ";
    cin >> mobil;

    int parkir_motor = 313 , parkir_mobil = 724;
    int seminggu_motor = (motor * parkir_motor) * 7;
    int seminggu_mobil = (mobil * parkir_mobil) * 7;
    float setor = (seminggu_motor + seminggu_mobil) * 0.1;
    float hasil_bersih = seminggu_motor + seminggu_mobil - setor;
    cout << "Hasil parkir motor selama seminggu : " << seminggu_motor << endl;
    cout << "Hasil parkir mobil selama seminggu : " << seminggu_mobil << endl;
    cout << "Jumlah yang harus disetor Pak Supri : " << setor << endl;
    cout << "Pendapatan bersih Pak Supri : " << hasil_bersih << endl;

    return 0;

}
