#include <iostream>
#include <cmath>
#include <fstream>

double * linspace(double,double,int);
int main() {

    std::ifstream myfile;
    myfile.open ("data.txt");
    if (!myfile)
    {
        std::cout << "Error al abrir ejemplo.dat\n";
        exit(EXIT_FAILURE);
    }
    std::string tp;
    int dataSize = 400;
    double data[dataSize];
    int ctd = 0;
    while(getline(myfile, tp)){ //read data from file object and put it into string.
        data[ctd] = std::stod(tp); //print the data of the string
        ctd++;
    }
    
    myfile.close();
    int nCoef = 5;
    double b[nCoef];
    double x[nCoef] = {0};

    for (int i = 0; i < nCoef; i++)
    {
        b[i] = (double)1/nCoef;
        std::cout<<b[i]<<std::endl;
    }

    double y;
    for (int i = 0; i < dataSize; i++)
    {
        y = 0;
        x[0] = data[i];
        for (int j = 0; j < nCoef; j++)
        {
            y += b[j]*x[j];
        }
        for (int j = nCoef-1; j > 0; j--){
            x[j] = x[j-1];
        }
        std::cout << y << std::endl;
    }
    
    return 0;
}

