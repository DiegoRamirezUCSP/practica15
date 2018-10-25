#include "puntoarray.h"

puntoarray::puntoarray()
{
    this->sizee = 0;
    this->points = new punto[sizee];

}
puntoarray::puntoarray(const punto pts[],
                       const int sizee){
    this->sizee = sizee;
    this->points = new punto[sizee];
    for(int i = 0;i < sizee; i++)
        points[i]=pts[i];
}
puntoarray::puntoarray(puntoarray &o){
    this->sizee = o.sizee;
    this->points = new punto[sizee];
    for(int i = 0;i < sizee; i++)
        points[i]=o.points[i];

}
int puntoarray::getsize(){
    return this->sizee;
}
puntoarray::~puntoarray()
{
    delete[] points;
    }
