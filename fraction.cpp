#include "fraction.h"
#include <math.h>


fraction::fraction(double realFract){
    /*int ind=0;
    int whole_part=static_cast<int>(realFract);
    int fract=realFract-whole_part;
    for (int i=0;;i++){
        fract=fract*10;
        ind++;
        if(static_cast<int>(fract)==fract)
        break;

    }

    _denom=pow(10,ind);
    _num=whole_part*_denom+fract;*/
    _denom=10;
    _num=realFract*10;

}