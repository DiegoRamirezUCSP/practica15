#ifndef PUNTOARRAY_H
#define PUNTOARRAY_H
#include "punto.h"


class puntoarray
{
    public:
        puntoarray();
        puntoarray(const punto pts[],
                   const int sizee);
        puntoarray(puntoarray &o);
        int getsize();
        ~puntoarray();

    private:
        int sizee;
        punto *points;
};

#endif // PUNTOARRAY_H
