#include <iostream>
#include "fraction.h"


int find_nod(double realFract){
    int temp=0;
    int b=100000000;
    int a=(realFract-static_cast<int>(realFract))*100000000+static_cast<int>(realFract)*100000000;
    while (b != 0){
        temp = b;
        b = a % b;
        a = temp;
        }
    return a;
}

int main(){
    double f=2.5;

    //std::cout<<"Imput fraction"<<std::endl;
   // std::cin>>f;
    if(f!=0){
    fraction fract=fraction(f);
    }
    return 0;
}