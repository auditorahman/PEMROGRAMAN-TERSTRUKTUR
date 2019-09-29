#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b;
    char motor[10], mobil[10];
    string admin[25];
    double sandi;
    puts("Masukkan jumlah motor yang parkir dalam sehari : ");
    gets(motor);
    puts("Masukkan jumlah mobil yang parkir dalam sehari : ");
    gets(mobil);
    printf("Nama admin : ");
    scanf("%s", admin);
    printf("Kata sandi : ");
    scanf("%lf", sandi);

    a=atoi(motor);
    b=atoi(mobil);

    int parkirMotor = 313 , parkirMobil = 724;
    int semingguMotor = (a * parkirMotor) * 7;
    int semingguMobil = (b * parkirMobil) * 7;
    float setor = (semingguMotor + semingguMobil) * 0.1;
    float hasilBersih = semingguMotor + semingguMobil - setor;
    printf("====================================================");
    printf("\n1. Hasil parkir motor selama seminggu  : %d", semingguMotor);
    printf("\n2. Hasil parkir mobil selama seminggu  : %d", semingguMobil);
    printf("\n3. Jumlah yang harus disetor Pak Supri : %g", setor);
    printf("\n4. Pendapatan bersih Pak Supri         : %g", hasilBersih);


}
