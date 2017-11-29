// Mark Dowling
// Lab 1
// Cel to Fahr
// C00216994

#include <iostream>

using namespace std;

int main()
{
    double cel,fahr;

    cout << "Welcome to my degrees to fahrenheit calculator!\n\n"  << endl;

    /**< read in values */
	cout << "Celcius value:  ";
	cin >> cel;


    /**< calculate and display result */
	fahr = (9/5.0)*cel+32;
	cout << "\nFahrenheit value: " << fahr << endl;

	return 0;
}
