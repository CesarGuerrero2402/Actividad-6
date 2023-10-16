#ifndef NEURONAS_H
#define NEURONAS_H
#include "Neurona.h"
#include <iostream>
#include <fstream>
#include <QString>
#endif // NEURONAS_H

using namespace std;

class Neuronas
{
    public:
        Neuronas();
        Neuronas(Neurona*);

        Neurona *h;

        void insertarinicio(int, double,int,int,int,int,int);
        void insertarfinal(int,double,int,int,int,int,int);
        void mostrar(int&,double&,int&,int&,int&,int&,int&,int);
        void buscar(int,int&,double&,int&,int&,int&,int&,int&);
};
