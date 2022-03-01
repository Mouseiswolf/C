#include <iostream>
using namespace std;
class point
{
    public:
        void Set(double a,double b);
        void toAngle();
        int cmp(point p2);
    private:
        double x;
        double y;
        double p;
        double angle;
};
void point::Set(double a,double b)
{
    x=a;
    y=b;
}
void point::toAngle()
{
    p=sqrt(x*x+y*y);
    angle=atan2(y,x);
}
int point::cmp(point p2)
{
    if()
}
int main()
{
    
}