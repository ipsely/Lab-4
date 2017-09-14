#include <iostream>
using namespace std;

float cube(float a)
{

	float cu = a*a*a;
	return cu;
	
}

int main ()
{
	float n;
	cout<<"Enter a number to find it's cube : "<<endl;
	cin>>n;
	float c=cube(n);
	cout<<"The cube of "<<n<<" is "<<c;
	return 0;
}
