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



     void dugumGetir(int sira){
        //istedigim siradaki dugumun adresini getiriyor
        //bu alani kullaniciya acmamamiz gerekiyor o nedenle private alaninda yer aliyor

        int sayac=0;

        DDugum* gec=ilk;

        while(gec!=0){
            if(sayac==sira){
                return gec;

            }
            gec=gec->sonraki;

            sayac++;


        }
        return 0;

        
    }


    void cikar(int sira){
        // bu fonksiyon sirasini verdigimiz dugumu listeden cikartiyor

        DDugum* sil= dugumGetir(sira);

        if(sil==0) return; //dugum yoksa fonksiyon direkt biter

        DDugum* onceki= sil->onceki;
        DDugum* sonraki= sil->sonraki;

        delete sil;

        if(sonraki)
           sonraki->onceki=onceki;

           if(onceki)
             onceki->sonraki=sonraki;

             else
                ilk=sonraki; //yani benim ilk dugumum en sondaki yani sonraki olarak atadigimiz dugum oldu

                //eger silinecek dugumden onceki yoksa bu dugum ilk dugumdur.

    }

       
    void ekle(int sira, int veri){

        //istenilen siraya, istedigimiz veriyi ekleme fonksiyonu

        if(ilk==0 && sira==0){
            ilk= new DDugum(veri);
        }

        DDugum* dug= new dugumGetir(sira);

        if(dug==0) return;

        DDugum* yeni= new DDugum(veri);

        DDugum* onceki= dug->onceki;

        dug->onceki=yeni;
        yeni->sonraki=dug;
        yeni->onceki=onceki;

        if(onceki){
            onceki->sonraki=yeni;
        }
        else{
            ilk=yeni;
        }

        std::cout<<"yeni dugum eklendi."<<ekle(9)<<std::endl
    }

    





int main(){
    //uc tane dugum olusturup uc tane pointer ile de dugumleri tutuyoruz.


    IkiYonluBagliListe liste;

    liste.ekle();



   
};
