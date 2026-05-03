#include <iostream>

using namespace std;

/*
* uniform_int_distrubition: uniform int generator
* uniform_real_distrubition: uniform float number generator
* 
* these are different from rand() function. More professional usage of the tests are done with these methods.
* these methods generates nonrepeatedly uniform numbers. This allows professional tests to be more consistent and
* robust test methods by using the interval values more effected (non-repeated)
*/

#include <random>			//use this library to access its belongings

int main()
{
	random_device rd;		//real random object (takes from hardware)

	mt19937 motor(rd());	//uniform random number generator motor (Mersenne Twister Algorithm)

	uniform_int_distribution<int> distribution(0, 10);	//define interval

	int randomNumber = distribution(motor);				//generate random number with motor

	cout << "Random Number: " << randomNumber << endl;

	//random float number generator with uniform_real_distribution

	uniform_real_distribution<double> distribution2(0, 10);		

	double randomNumber2;

	randomNumber2 = distribution2(motor);

	cout << "Random Number: " << randomNumber2 << endl;

}