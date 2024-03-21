#include <iostream>

const int MAX=10; //yiginin maksimum boyutu

class Stack{
    public:
    Stack();

    void ekle(int veri);

    void cikar(); //yigindan bir deger cikartir.

    bool bosmu();

    bool dolumu();

    int getir(); //yigina en son eklenen elemani getirir.

    private:
    int tepe;
    int veriler[MAX]; //yiginin elemanlarini tutacak dizi





};