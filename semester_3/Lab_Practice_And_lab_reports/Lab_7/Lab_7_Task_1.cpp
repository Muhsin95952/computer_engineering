#include <iostream>
using namespace std;

class Shape{
    protected:
        float area;
        float volume;
    public:
        void Area()
		{ 
		    cout<<"Area:\t" << 0 << endl; 
		}
        virtual void Volume()
		{ 
		    cout<<"Volume:\t" << 0 << endl;
	    }
        virtual void display() = 0;
};

class Point: public Shape{
    protected:
        float x;
        float y;
    public:
        Point(): x(0), y(0) {}
        Point(float a, float b): x(a), y(b) {}
        void Area(){ cout<<"Area of Point:\t" << 0 << endl; }
        void Volume(){ cout<<"Volume of Point:\t" << 0 << endl; }
        void display (){ cout<< "Position of Point:(" << x <<" , "<< y << ")" <<endl; }
};
class Circle : public Point{
    protected:
        float radius;
    public:
        Circle(): radius(0), Point() {}
        Circle(float a, float b, float c): radius(c), Point(a, b) {}
        void Area(){ cout<<"Area of Circle:\t" << 2 * 3.14 * radius * radius << endl; }
        void Volume(){ cout<<"Volume of Circle:\t" << ( 4 / 3 )*(3.1417 * radius * radius * radius) << endl; }
        void display (){ cout<< "Center:\t(" << x <<" , "<< y << ")\nRadius:\t"<<radius<<endl; }
};
class Cylinder:public Circle{
    protected:
        float height;
    public:
        Cylinder():height(0), Circle() {}
        Cylinder(float a, float b, float c, float d):height(d), Circle(a, b, c) {}
        void Area(){ cout<<"Area of Cylinder:\t" << 2 * 3.14 * radius * (radius + height) << endl; }
        void Volume(){ cout<<"Volume of Cylinder:\t" << 2 * 3.1417 * radius * radius * height << endl; }
        void display (){ cout<< "Center:\t(" << x <<" , "<< y << ")\nRadius:\t"<<radius<<"\nHeight:\t"<<height<<endl; }
};

int main(){
    Shape *sh;
    Point p(1,2);
    Circle c(3,4,5);
    Cylinder cy(4, 5, 6, 7);
//    Shape sh;
//    sh.display();

    cout<<"\nPoint:\n";
    sh = &p;
    sh->Area();
    sh->Volume();
    sh -> display();

    cout<<"\nCircle:\n";
    sh = &c;
    sh->Area();
    sh->Volume();
    sh->display();

    cout<<"\nCylinder:\n";
    sh = &cy;
    sh->Area();
    sh->Volume();
    sh->display();
    return 0;
}
