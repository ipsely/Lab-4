#include<iostream>
using namespace std;
float dia(float r)
{
        float z = 2 * r;
        return z;
}
float cir(float r)
{
        float z = 2 * 3.14 * r;
        return z;
}
float area(float r)
{
        float z = 3.14 * r * r;
        return z;
}
main()
{
float r,a,c,d;
cout << "Enter radius : "<<endl;
cin >> r;
a = area(r);
c = cir(r);
d = dia(r);
cout << "Diameter = " << d << endl << "Circumference = " << c << endl << "Area = " << a;
}
