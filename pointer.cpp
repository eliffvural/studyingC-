#include <iostream>
using namespace std;

int main(){

    int t[3]={1,2,3};
    int *ptr=t;

    std::cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<std::endl;

    *ptr=8;
        std::cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<std::endl;

    (*ptr)++;
            std::cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<std::endl;

    *ptr++=5;
                std::cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<std::endl;

    *ptr=6;
                    std::cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<std::endl;

    (*++ptr)++;
                        std::cout<<t[0]<<" "<<t[1]<<" "<<t[2]<<std::endl;











}