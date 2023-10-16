#include "Neurona.h"
#include <fstream>

using namespace std;


Neurona::Neurona(int id, double voltaje, int px, int py,int red,int green, int blue, Neurona* sig)
{
    this->id=id;
    this->voltaje=voltaje;
    this->px=px;
    this->py=py;
    this->red=red;
    this->green=green;
    this->blue=blue;
}

Neurona::Neurona()
{
    id=0;
    voltaje=0.0;
    px=0;
    py=0;
    red=0;
    green=0;
    blue=0;
}
