#include <iostream>
#include<string>
#include<vector>
#include "Header.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int razn;
    vector<Money>money(2);
    for (int i = 0; i < money.size(); i++)
    {
        money[i].SetRub();
        money[i].GetRub();
        money[i].SetKop();
        money[i].GetKop();
        money[i].PrintClass();
        money[i].SetDop();
        money[i].GetDop();
        money[i].GetRazn();
        money[i].PrintClass();
    }
    if (money[0].GetRub() == money[1].GetRub() && money[0].GetKop() == money[1].GetKop())
        cout << "Суммы равны" << endl;
    else
        cout << "Суммы не равны" << endl;
}