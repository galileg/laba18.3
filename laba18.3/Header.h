#pragma once
#include<iostream>
using namespace std;
class Money
{
    long rub;
    int kop;
    int dop;
public:
    Money();
    Money(long rub, int kop);
    ~Money();
    void SetRub();
    long GetRub();
    Money& operator++();
    Money& operator++(int a);
    void SetKop();
    int GetKop();
    void SetDop();
    int GetDop();
    void PrintClass();
    void GetRazn();
};