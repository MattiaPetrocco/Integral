/** \file mathf.c
	\brief Definition of the functiond declaered in mathf.h 
	\author Mattia Petrocco

	Details.
*/

#include "mathf.h"
#include "struct.h"

double Polynomial(poly_s polyf, double in) {
	
	int i;
	double out = 0.;
	double x = in;	
	
	out = polyf.coeffs[0];
	for (i=1; i<polyf.degree; i++) {
		out += polyf.coeffs[i]*x;
		x *= in;
	}

	return out;

}

void Rectangular(double* values, int size, double stepsize, double* integ1, double* integ2) {

	int i; 	/* counter for loops */

	(*integ1) = 0.;
	(*integ2) = 0.;

	(*integ1) += stepsize * values[0];
	for (i = 1; i < (size - 1); i++) {
		(*integ1) += stepsize * values[i];
		(*integ2) += stepsize * values[i];
	}
	(*integ2) += stepsize * values[i];

	return;
}


float Trapezoidal(double* values, int size, double stepsize) {

	int i; 		/* counter for loops */

	double integ = 0.; 		/* used as accumulator to compute the integral */
	double h = stepsize / 2.;	/* to avoid dividing by 2 at each round of the loop */

	for (i = 0; i < (size - 1); i++)
		integ += h * (values[i + 1] + values[i]);

	return integ;
}