// Program to compute distance between two points

#include <iostream>
#include <math.h>

using namespace std;

// int Difference();

class point
{
private:
    int x, y;

public:
    friend void difference(point, point);
    point(int a, int b)
    {

        x = a;
        y = b;
    }
    void displayoints(void)
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};

void difference(point o1,point o2)
{
    int x_diff =o2.x-o1.x; 
    int y_diff=o2.y-o1.y;

    double distance=sqrt((x_diff)*(x_diff)+(y_diff)*(y_diff));
    cout<<"Distance is :"<<distance<<" units ";
}

int main()
{
    point a(1,2), b(4,3);
    a.displayoints();
    b.displayoints();

    cout<<endl;

    difference(a,b);

    return 0;
}