/*! @file mathf.h
	@brief Library of functions for computing integrals 
	@author Mattia Petrocco

*/ 


#ifndef IO_H 
#define IO_H

#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "struct.h"

FILE* OpenFile(char* filePath);
int CloseFile(FILE* fPtr);
int ReadConfigFile(FILE* fPtr, poly_s* pf, float* xinf, float* xsup, int* intervals); 
int ParseLine(poly_s* pf, char* str);

#endif