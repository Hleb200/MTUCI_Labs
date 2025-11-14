#include <iostream>
#include <cmath> 
#define _USE_MATH_DEFINES 
#include "math.h" 
#include "Header.h"

using namespace std;



void main() {
	double R, a, P;
	int n;
	GetR(R, n);
	CompP(n, R, a, P);
	Put( R, P, n);
}
