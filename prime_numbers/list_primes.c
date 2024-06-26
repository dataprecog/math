//==============================================================================                          
// 
//==============================================================================                          
//  Description............: List Prime Numbers
//  Author.................: Data Precog
//  Email..................: info@dataprecog.com
//  Date...................: 2003.04.02
//  Version................: 1.0
//==============================================================================                          

//================================================================================
// Library Links
//================================================================================
#include <stdio.h>
#include <stdlib.h>

//================================================================================
// Symbolic Constants
//================================================================================
#define MAX_INT_ARRAY 100000 // Size of integer arrays, used in the Sieve of Eratosthenes algorithm to generate prime numbers

//================================================================================
// Global Variables
//================================================================================

//================================================================================
// UDF Prototypes
//================================================================================
short l_list_primes();

//================================================================================
// Main Function
//================================================================================
int main() {
      printf("%d\n", l_list_primes());

      return 0;
}

//================================================================================
// Function l_primes:   based on the "Sieve of Eratosthenes" algorithm
//================================================================================
short l_list_primes() {
    unsigned long long int i, j;
    int * primes;
    int z = 1;
 
    primes = malloc(sizeof(int) * MAX_INT_ARRAY);
 
    for (i = 2; i < MAX_INT_ARRAY; i++)
        primes[i] = 1;
 
    for (i = 2; i < MAX_INT_ARRAY; i++)
        if (primes[i])
            for (j = i; i * j < MAX_INT_ARRAY; j++)
                primes[i * j] = 0;
 
    printf("\nPrime numbers in range 1 to %d are: \n", MAX_INT_ARRAY);
    for (i = 2; i < MAX_INT_ARRAY; i++)
        if (primes[i])
            printf("%d ", i);

	printf("\n");

	free(primes);
 
	return 0;
}

//================================================================================
// EOF
//================================================================================
