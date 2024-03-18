#include <iostream>

using namespace std;


//nesne dizisi olusturuyoruz.

class Number{
    public:
    Number(){
        s1= rand()%100;
        s2= rand()%100;
        std::cout<<this<<" adresindeki nesne olusturuldu."<<std::endl;

    };

    ~Number(){

        std::cout<<this<<" adresindeki nesne yok edildi."<<std::endl;
    }

    void yazdir(){

        std::cout<<"s1, s2: "<<s1<<","<<s2<<std::endl;

    }

    private:
    int s1;
    int s2;

};


int main(){

   /*  Number* p= new Number;
    
    delete p; */

    Number* p= new Number[10];

    //delete[] p; //diziyi bosaltir ve yok eder.  

    //elemanlara tek tek erismek istiyorsak;
    for(int i=0;i<10;i++)
        // (p+i)->yazdir();
       (*(p+i)).yazdir();

      //  p[i].yazdir();

         delete[] p;


}