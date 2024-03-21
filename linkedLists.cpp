#include <iostream>
using namespace std;

class Dugum{
    public:
    Dugum(int veri){
        this->veri=veri;
        sonraki= nullptr; //ilkini olusturdugumuzda ilk oldugu icin sonraki null olacaktir.

    }

    int veri;
    Dugum* sonraki;
};

int main(){

     Dugum* d1= new Dugum(19);
     Dugum* d2= new Dugum(12);
     Dugum* d3= new Dugum(11);
     Dugum* d4= new Dugum(03);
     Dugum *d5= new Dugum(21);

     d1->sonraki=d2;

     std::cout<<"d1->sonraki: (d2nin adresi:) "<<d1->sonraki<<std::endl; //d2 nin adresine erisim sagladik.


     d2->sonraki=d3;

     std::cout<<"d1->sonraki->sonraki: (d3ün adresi:) "<<d1->sonraki->sonraki<<std::endl;

     //sadece d1 uzerinden ulasabiliriz:
     d1->sonraki->sonraki=d3; //d3 un adresine erişmiş olduk.

}
