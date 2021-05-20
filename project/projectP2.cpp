/*
Syed Ali/Olabode Ajishe COSC 528 Project
Newton's Method Problem 2
Assignment due May 11th, 2021
*/

#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
#include<chrono>
using namespace std;

double f(double x);												// Declare the function for the given equation


double f(double x)												// Define the function here, i.e. give the equation
{
	double a = sin(x) - 0.63;								             // Write the first derivative of the equation 
	return a;
}

double fprime(double x);

double fprime(double x)
{
	double b = cos(x);									         // Write the first derivative of the equation
	return b;
}

int main()
{
	double x{}, x1, e, fx, fx1;
	int step = 0, N;
	auto start = chrono::steady_clock::now();


	cout.precision(4);											// Set the precision
	cout.setf(ios::fixed);

	cout << "Enter the initial guess\n";						// Take an initial guess
	cin >> x1;
	cout << "Enter the desired relative error\n";				// Take the desired accuracy
	cin >> e;
	cout << "Enter maximum number of iterations\n";
	cin >> N;


	fx = f(x);
	fx1 = fprime(x);
	cout << "Iteration" << "         " << "x{i}" << "                   " << "x{i+1}" << "             " << "|x{i+1}-x{i}|" << endl;

	do
	{
		x = x1;													// make x equal to the last calculated value of x1
		step = step + 1;
		if (step > N)
		{
			cout << "Not Convergent.";
			exit(0);
		}
		fx = f(x);												// simplifying f(x) to fx
		fx1 = fprime(x);										// simplifying fprime(x) to fx1
		x1 = x - (fx / fx1);									// calculate x{1} from x, fx and fx1
		cout << step << "                " << x << "                  " << x1
			<< "                 " << abs(x1 - x) << endl;
	} while (fabs(x1 - x) >= e);								// if |x{i+1} - x{i}| remains greater than the desired accuracy, continue the loop

	cout << "The root of the equation is " << x1 << endl;

	auto end = chrono::steady_clock::now();

	cout << "The total time it took to complete this iteration is: " << chrono::duration_cast<chrono::seconds>(end - start).count() << " sec\n";


	return 0;


}