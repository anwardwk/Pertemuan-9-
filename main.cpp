

#include <iostream>

using namespace std;

int main()
{
    // 1,3,5,7,8,10,12  31
    // 4,6,9,11  30

    int tanggal, bulan;

    cout << "masukan tanggal: ";
    cin >> tanggal;
    cout << "masukan bulan: ";
    cin >> bulan;

    if ((tanggal >= 1 && tanggal <= 31) && (bulan == 1 || bulan == 3 || bulan == 5 || bulan == 7 || bulan == 8 || bulan == 10 || bulan == 12))
    {
        cout << "tanggal valid";
    }
    else if ((tanggal >= 1 && tanggal <= 30) && (bulan == 9 || bulan == 4 || bulan == 6 || bulan == 11))
    {
        cout << "tanggal valid";
    }
    else if (tanggal >= 1 && tanggal <= 28 && bulan == 2)
    {
        cout << "tanggal valid";
    }
    else
    {
        cout << "tanggal tidak valid";
    }

    while (true)
    {
        int hari;
        int bulan;
        cout << "\nMasukkan hari:\n";
        cout << " > ";
        cin >> hari;
        cout << "Masukkan bulan:\n";
        cout << " > ";
        cin >> bulan;

        bool bulanGanjil = bulan % 2 == 1;
        int hariMaksimal;

        /* Jika Februari */
        if (bulan == 2)
        {
            hariMaksimal = 29;
        }
        else if (bulan <= 7)
        {
            if (bulanGanjil)
            {
                hariMaksimal = 31;
            }
            else
            {
                hariMaksimal = 30;
            }
        }
        else
        {
            if (bulanGanjil)
            {
                hariMaksimal = 30;
            }
            else
            {
                hariMaksimal = 31;
            }
        }

        if (hari < 1 || hari > hariMaksimal || bulan < 1 || bulan > 12)
        {
            cout << "TANGGAL TIDAK VALID\n";
        }
        else
        {
            cout << "TANGGAL VALID\n";
        }
    }

    int a;

    cout << "masukan nilai : ";
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "a = 1" << endl;
    case 2:
        cout << "a = 2" << endl;
    case 3:
        cout << "a = 3" << endl;
    case 4:
        cout << "a = 4" << endl;
    case 5:
        cout << "a = 5" << endl;
        break; // meloncati program
    default:
        cout << "default";
    }
    return 0;
}
