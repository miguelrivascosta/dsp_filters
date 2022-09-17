#include <iostream>
#include <cmath>
#include <fstream>

#include "data.h"
#include "b.h"

#include <chrono>
void linearFirFilter(double *);
int main() {
    double y[dataSize] = {0};
    linearFirFilter(y);
    std::ofstream f;
    f.open ("yFilt_linear");
    for (int i = 0; i < dataSize; i++)
    {
        f << y[i]<<"\n";
    }
    f.close();
    return 0;
}
void linearFirFilter(double * y){
    double x[dataSize] = {0};
    double yn;
    //71198
    for (int i = 0; i < dataSize; i++)
    {
        x[0] = data[i];
        for (int j = 0; j < N; j++)
        {
            y[i] += b[j]*x[j];
        }
        for (int j = N-1; j > 0; j--){
            x[j] = x[j-1];
        }
    }
}

