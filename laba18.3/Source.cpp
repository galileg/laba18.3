#include <iostream>
#include "Header.h"
using namespace std;

Money::Money() 
{
    rub = 0;
    kop = 0;
    dop = 0;
}
Money::Money(long rub, int kop)
{
    this->rub = rub;
    this->kop = kop;
    this->dop = dop;
}
Money:: ~Money() {}
void Money :: SetRub()
{
    long val;
    cout << "������� �����: ";
    cin >> val;
    while (val < 0)
    {
        cout << "������� ���������� �����: ";
        cin >> val;
    }
    this->rub = val;
}
long Money::GetRub() { return rub; }
void Money :: SetKop()
{
    int tmp;
    cout << "������� �������: ";
    cin >> tmp;
    while (tmp > 99 || tmp < 0)
    {
        cout << "������� ���������� �����: ";
        cin >> tmp;
    }
    this->kop = tmp;
}
int Money :: GetKop() { return kop; }
void Money :: SetDop()
{
    int tmp1;
    cout << "������� ���������� �������: ";
    cin >> tmp1;
    while (tmp1 > 99 || tmp1 < 0)
    {
        cout << "������� ���������� �����: ";
        cin >> tmp1;
    }
    this->dop = tmp1;
}
int Money :: GetDop() { return dop; }
void Money :: PrintClass()
{
    cout << "��������: " << this->rub << "," << this->kop << endl;
}
void Money :: GetRazn()
{
    if (kop >= dop)
        kop -= dop;
    else {
        rub--;
        kop = 100 + kop - dop;
    }
}
Money& Money::operator++() 
{
    rub++;
    return *this;
}
Money& Money::operator++(int a) 
{
    Money tmp(*this);
    this->rub++;
    return tmp;
}