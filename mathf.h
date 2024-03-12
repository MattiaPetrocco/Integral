/** \file mathf.h
	\brief Library of functions for computing integrals
	\author Mattia Petrocco

	Details.
*/

#ifndef _MATHFH_
#define _MATHFH_

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
#include "struct.h"

double Polynomial(poly_s polyf, double in);
void Rectangular(double* values, int size, double stepsize, double* integ1, double* integ2);
float Trapezoidal(double* values, int size, double stepsize);

#endif