#include "Neuronas.h"
#include "qdebug.h"
#include <fstream>
#include <string>
#include <QString>

Neuronas *Neu=new Neuronas();
Neuronas::Neuronas()
{
    h=nullptr;
}

void Neuronas::insertarinicio(int id,double voltaje,int px,int py, int red,int green, int blue)
{
    Neurona *aux=new Neurona(id,voltaje,px,py,red,green,blue,nullptr);

    if(!h)
    {
        h=aux;
    }
    else
    {
        aux->sig=h;
        h=aux;
    }
}

void Neuronas::insertarfinal(int id,double voltaje,int px,int py,int red,int green,int blue)
{
    Neurona *aux=new Neurona(id,voltaje,px,py,red,green,blue,nullptr);
    Neurona *tmp;

    if(h==nullptr)
    {
        h=aux;
    }
    else
    {
        tmp=h;
        while(tmp->sig!=nullptr)
        {
            tmp=tmp->sig;
        }
        tmp->sig=aux;
        tmp=tmp->sig;
        tmp->sig=nullptr;
    }
}


void Neuronas::mostrar(int& i,double& v,int& px,int& py,int& r,int& g,int& b,int n)
{
    int x=0;
    Neurona *tmp=h;
    while(n>x)
    {
        i=tmp->id;
        v=tmp->voltaje;
        px=tmp->px;
        py=tmp->py;
        r=tmp->red;
        g=tmp->green;
        b=tmp->blue;
        tmp=tmp->sig;
        x=x+1;
    }
}

void Neuronas::buscar(int idbuscar,int& i,double& v,int& px,int& py,int& r,int& g,int& b)
{
    Neurona *tmp=h;
    i=-1;
    while(tmp!=nullptr)
    {
        if(idbuscar==tmp->id)
        {
            i=tmp->id;
            v=tmp->voltaje;
            px=tmp->px;
            py=tmp->py;
            r=tmp->red;
            g=tmp->green;
            b=tmp->blue;
        }
            tmp=tmp->sig;
    }
}
