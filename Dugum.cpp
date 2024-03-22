#include <iostream>
using namespace std;

class DDugum{

    public:
    DDugum(int veri){
        this->veri=veri;
        sonraki=onceki=0; //iki isaretci de kurucu da sifir degerini almalidir.
    }

    int veri;
    DDugum* onceki;
    DDugum* sonraki;
};


class IkiYonluBagliListe
{

   


public:
   IkiYonluBagliListe(){
        ilk=0;
    }

    ~IkiYonluBagliListe();

    void ekle(int sayi){
        DDugum* yeni= new DDugum(sayi);

        if(ilk==0){
            ilk=yeni; //ilk degerimiz onceden yokmus demek oluyor.
            return;
        }

        DDugum* gec=ilk;

        while(gec->sonraki!=0){
            gec= gec->sonraki;
        }

        gec->sonraki=yeni;
        yeni->onceki=gec;

    }




    void cikar(){

        //oncelikle ilk in sifira esit olup olmadigini kontrol ediyoruz.

        if(ilk==0){
            return;
        }

        if(ilk->sonraki==0){
            //yani tek bir dugum var demektir.
            delete ilk;
            ilk=0;
            return;

        }

        DDugum* gec=ilk; //birden fazla dugum var demek. bu durumda sondan bir onceki dugume gidiyoruz


        while(gec->sonraki->sonraki!=0){
            gec=gec->sonraki; //sondan bir onceki dugume getirdik
        }

        delete gec->sonraki; //son dugumu silme islemini yaptik
        gec->sonraki=0; //aradaki bagi da silmis oluyoruz bu sekilde







    }

private:

DDugum* ilk;

};




int main(){
    //uc tane dugum olusturup uc tane pointer ile de dugumleri tutuyoruz.

    DDugum* d1= new DDugum(19);
    DDugum* d2= new DDugum(12);
    DDugum* d3= new DDugum(03);

    d1->sonraki=d2;
    d2->onceki=d1;
    d2->sonraki=d3;
    d3->onceki=d2;
}
