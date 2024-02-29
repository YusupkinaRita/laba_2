#include "fraction.h"
#include <math.h>


fraction::fraction(double realFract){
    int ind=0;
    int whole_part=static_cast<int>(realFract);
    double fract=realFract-whole_part;
    for (int i=0;;i++){
        fract=fract*10;
        ind++;
        if(static_cast<int>(fract)==fract)
        break;

    }

    _denom=pow(10,ind);
    _num=whole_part*_denom+fract;
    std::cout<< *this;
    reduce();



}
int find_nod(int a, int b){
    int temp=0;
    //int b=100000000;
    //int a=(realFract-static_cast<int>(realFract))*100000000+static_cast<int>(realFract)*100000000;
    while (b != 0){
        temp = b;
        b = a % b;
        a = temp;
        }
    return a;
}

void fraction::reduce(){
    //fraction fract1=fraction(realFract);
    int d=find_nod(_num,_denom);
    _num/=d;
    _denom/=d;
    
}