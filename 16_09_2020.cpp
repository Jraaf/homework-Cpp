#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, ".1251");
    system("color 1F");

    cout << "\n\n\tПрактична робота. Тема: __________\n\n\t";

    setlocale(LC_ALL, ".866");

    cout << "\n\t" << char(218);
    cout << "\t" << char(179);
    cout << "\t" << char(191);
    cout << "\t" << char(194);
    cout << "\t" << char(195);
    cout << "\t" << char(196);
    cout << "\t" << char(197);
    cout << "\t" << char(180);
    cout << "\t" << char(192);
    cout << "\t" << char(193);
    cout << "\t" << char(217);


    char u1, u2, u3, u4, h, w, p, vk, nk, kk, lk, pk;

    u1 = char(218);
    u2 = char(191);
    u3 = char(192);
    u4 = char(217);
    w = char(179);
    h = char(196);
    p = char(32);
    vk = char(194);
    nk = char(193);
    kk = char(197);
    lk = char(195);
    pk = char(180);


    cout << "\n\t" << u1;
    for (int k = 0; k < 79; k++)
    {
        if (k % 20 != 0 || k == 0) cout << h;
        else cout << vk;
    }
    cout << u2;
   
    for (int i = 0; i < 16; i++)
    {
        cout << "\n\t" << w;
        for (int k = 0; k < 79; k++)
        {  
           
            if (k == 9)cout << char(32 + i);
            else if (k == 49) cout << char(48 + i);
            else if (k == 29) cout << char(8)<<32+i;    //я посчитал отступы: по этому тут эти числа
            else if (k == 69) cout <<char(8)<< 48 + i;
            else if (k % 20 != 0 || k == 0) cout << p;
            else if (k % 20 == 0 && k!=0)cout << w;
        }
        cout << w;
        cout << "\n\t" << lk;
        for (int k = 0; k < 79; k++)
        {
            if (k % 20 != 0 || k == 0) cout << h;
            else cout << kk;
        }
        cout << pk;
    }


    for (int i = 0; i < 13; i++)
    {
        cout << "\n\t" << w;
        for (int k = 0; k < 79; k++)
        {

            if (k == 9)cout << char(65 + i);
            else if (k == 49) cout << char(78 + i);
            else if (k == 29) cout << char(8) << 65 + i;
            else if (k == 69) cout << char(8) << 78 + i;
            else if (k % 20 != 0 || k == 0) cout << p;
            else if (k % 20 == 0 && k != 0)cout << w;
        }
        cout << w;
        cout << "\n\t" << lk;
        for (int k = 0; k < 79; k++)
        {
            if (k % 20 != 0 || k == 0) cout << h;
            else cout << kk;
        }
        cout << pk;
    }

    cout << "\n\t" << u3;
    for (int k = 0; k < 79; k++)
    {
        if (k % 20 != 0 || k == 0) cout << h;
        else cout << nk;
    }
    cout << u4;
    cout << endl << endl << "\t";
    system("pause");
    return 0;
}
