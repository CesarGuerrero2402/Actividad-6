#ifndef NEURONA_H
#define NEURONA_H

#endif // NEURONA_H
#include <string>
#include <fstream>

using namespace std;

class Neurona
{
public:
    Neurona();
    Neurona(int,double,int,int,int,int,int,Neurona*);
    int id,px,py,red,green,blue;
    double voltaje;
    Neurona*sig;

protected:

private:
};
