
class Wektor2D
{
public:
    Wektor2D()
    {
        x = 0;
        y = 0;
    }
    Wektor2D(double a, double b)
    {
        x = a;
        y = b;
    }
    void   setX(double a) { x = a; }
    double getX() { return x; }
    void   setY(double a) { y = a; }
    double getY() { return y; }

    double operator*(const Wektor2D& b)
    {
        return double(x * b.x + y * b.y);
    }
    Wektor2D operator+(const Wektor2D& b)
    {
        return Wektor2D{this->x + b.x, this->y + b.y};
    }
    double   x;
    double   y;
};
