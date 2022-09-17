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
    f.open("yFilt_circular");
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
        xn_ptr = x+i%N;
        xAux_ptr = xn_ptr;
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