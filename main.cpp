/* Name: Alejandro_Rodriquez, NSHE: 2001889172, 1001, Assignment3
* Description: Butterfly_Enclosure_Measurement_Calculator
* Input: Edge_Length
* Output: Enclosure_Computations_for_Dodecahedron
*/
//included libraries
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main () {
        //Dodecahedron calculator
        cout << setfill('*') << setw(49) << "*" << endl;
        cout << "* Welcome to the Butterfly Enclosure Calculator *" << endl;
        cout << setfill('*') << setw(49) << "*" << endl;

        double userInput;
        long double edgeL;

        //user input initial edge measument
        cout << "\nEdge length (feet): " ;
        cin >> userInput;

        //user input variable for edge length
        edgeL = userInput;
        
        cout << "\n" << setfill('-') << setw(32) << '-' << endl;
        cout << "Butterfly enclosure computations " << endl;
        cout << setfill('-') << setw(32) << '-' << endl;
        
        //constant computational values for equations
        double baseVal = 5.0;
        double fiveSquared = sqrt(5.0);
        double expValue = 2.0;
        double inputSqr = pow(edgeL,expValue);
        const double pi = 3.14159265358979;
        double fourThird = 4.0 / 3.0;
        double three = 3.0;
        double radius = ((edgeL / 4.0) * (3.0 + fiveSquared));

        //float precision point value 6 decimal places
        cout << fixed << showpoint << setprecision(6);
        //variable measurment fomulas 
        //surface area  
        double sArea = baseVal * inputSqr * (((sqrt(3))) + (6.0 * sqrt(5 + 2 * sqrt(5))));
        //volume 
        double volume = ((5.0/12.0) * pow(edgeL, 3)) * ((99 + 47 * sqrt(baseVal)));
        //formula for sphere approximation radius
        long double sphreApprox = ((edgeL / 4.0) * (3.0 + fiveSquared));  
        //formula for volume in feet
        long double feetVol = 4.00 / 3.0 * pi * (pow(radius,3.0));
        //formula for the surface area
        double surfVol = sArea / volume; 
        //output of dodecahedron measuments based on initial userInput
        cout << "\nEdge Length: "<< edgeL << " feet" << endl;
        cout << "Surface area: " << sArea << " square feet" << endl ;
        cout << "Volume: " << volume << " cubic feet" << endl;
        cout << "Surface to volume ratio: " << surfVol << endl;
        cout << "Sphere approximation radius: " << sphreApprox;
        cout << " feet volume: " << feetVol << " cubic feet" << endl;
        cout << "\nThank you for using zoo computational support" << endl;
        
        return 0;
}



