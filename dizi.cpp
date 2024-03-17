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
 void diziYazdir(int* dizi, int boyut){

 for (int i = 0; i < boyut; i++)
    {
        std::cout<<"dizi["<<i<<"]:"<<*(dizi+i)<<std::endl;
    }
    

 }

int main(){


    int* p= diziOlusturVeDegerAta(10);
    diziYazdir(p,10);

    delete p;

    



    


}