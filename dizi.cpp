#include <iostream>
using namespace std;


int* diziOlusturVeDegerAta(int elemanSayisi){

    int* dizi= new int[elemanSayisi];
    for (int i = 0; i < elemanSayisi; i++)
    {
        dizi[i]= rand()%100;
    }

    return dizi;
    
}


int main(){


    int* p= diziOlusturVeDegerAta(10);



    for (int i = 0; i < 10; i++)
    {
        std::cout<<"p+"<<i<<": "<<*(p+i)<<std::endl;
    }
    


}