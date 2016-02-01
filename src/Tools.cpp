#include <math.h>
#include <vector>
#include <iostream>
#include "Tools.h"

double LogPoissonProbability(unsigned int x,double mu) // simple poisson function
{
    double logfact=0;
    for (unsigned int j=1; j<=x; j++)
    {
        logfact+=log((double)j);
    }
    // Use product instead? Numerically stable? Time it?

    return ((double)x)*log(mu)-mu-logfact;
}


double LogGaussianProbability(double x,double mu,double sigma) // gaussian probability
{
    return -log(sigma) -log2pi -0.5*pow((x-mu)/sigma,2);
}

void PrintArray(std::vector<double> array) 
{ 
	unsigned int len = array.size(); 
	for(unsigned int i=0; i<len; i++) 
	{ 
		std::cout << "ARRAY " << i << " : " << array[i] << std::endl;  
	} 
} 
 

void PrintMatrix(std::vector<std::vector<double> > matrix) 
{ 
	unsigned int len1 = matrix.size(); 
	unsigned int len2 = matrix[0].size(); 
	for(unsigned int i=0; i<len1; i++) 
	{ 
		for(unsigned int j=0; j<len2; j++) 
		{ 
			std::cout << "MATRIX " << i << "," << j << " : " << matrix[i][j] << std::endl;  
		}
	} 
} 

