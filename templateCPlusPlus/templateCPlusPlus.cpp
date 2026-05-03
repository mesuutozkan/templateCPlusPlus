#include <iostream>

using namespace std;

/**
* Templates being used for creating a function or method which can use different type of variiables.
* This provides using same method with different variable types.
*/

//define a function template.

template <typename T>
T CalculateArea(T a, T b)
{
	return a * b;

}

template <typename T>  
class  rectangle
{
private:
	
	//variables defined as joker variable with "T".
	
	T edge1;
	T edge2;

public:
	
	rectangle(T e1, T e2)
	{
		edge1 = e1;
		edge2 = e2;

	}

	//return type is unknown, so "T" type is used. 

	T area()
	{
		return edge1 * edge2;

	}

	void printEdgeValues()
	{
		cout << "Edge 1: " << edge1 << endl << "Edge 2: " << edge2 << endl;

	}
};

int main()
{
	//templates can be used for a function or a class.

	cout << "area: " << CalculateArea(1, 2) << endl;

	cout << "area: " << CalculateArea(1.2, 2.3) << endl;

	//define "int" and "double" type rectangles.	 

	rectangle<int> rectangle1(2, 3);

	rectangle<double> rectangle2(3.3, 4.4);

	rectangle1.printEdgeValues();
	cout << "Area: " << rectangle1.area() << endl;
	
	rectangle2.printEdgeValues();
	cout << "Area: " << rectangle2.area() << endl;

}