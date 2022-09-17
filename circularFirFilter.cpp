#include <iostream>
#include <fstream>
#include "data.h"
#include "b.h"

#include <chrono>

void circularFirFilter(double *);

int main(){
    double y[dataSize] ={0};
    circularFirFilter(y);
    std::ofstream f;
    f.open("yFiltCircular");
    for (int i = 0; i < dataSize; i++)
    {
        f << y[i]<<'\n';
    }
    f.close();
    return 0;
}

void circularFirFilter(double * y){
    double x[N] = {0};
    double * xn_ptr = x, * xAux_ptr;
    for (int i = 0; i < dataSize; i++)
    {
        *xn_ptr = data[i];
        xAux_ptr = xn_ptr+i%N;
        for (int k = 0; k < N; k++)
        {   
            *(y+i) += *xAux_ptr*b[k];

            if(xAux_ptr == x) {
                xAux_ptr = &x[N-1];
            }else{
                xAux_ptr--;
            }
        }
    }
    
}