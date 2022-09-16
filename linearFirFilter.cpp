#include <iostream>
#include <cmath>
#include <fstream>

#include "data.h"
#include "b.h"

void linearFirFilter(double *);
int main() {
    double y[dataSize];
    linearFirFilter(y);
    std::ofstream f;
    f.open ("yFilt");
    for (int i = 0; i < dataSize; i++)
    {
        f << y[i]<<"\n";
    }
    f.close();
    return 0;
}
void linearFirFilter(double * y){
    double x[dataSize];
    double yn;

    for (int i = 0; i < dataSize; i++)
    {
        yn = 0;
        x[0] = data[i];
        for (int j = 0; j < N; j++)
        {
            yn += b[j]*x[j];
        }
        for (int j = N-1; j > 0; j--){
            x[j] = x[j-1];
        }
        y[i] = yn;
    }
}

