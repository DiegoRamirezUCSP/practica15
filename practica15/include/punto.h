
#ifndef PUNTO_H
#define PUNTO_H


class punto
{
    public:
        punto();
        punto(punto &o);
        punto(int ,int );

        void offset(int, int);
        void print();
        double getX();
        double getY();
        void setX(double x);
        void setY(double y);

 //   protected:

    private:
        double x, y;
};

#endif // PUNTO_H
