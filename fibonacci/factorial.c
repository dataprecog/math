//==============================================================================                          
// 
//==============================================================================                          
//  Description............: Factorial using recursion
//  Author.................: Data Precog
//  Email..................: info@dataprecog.com
//  Date...................: 2003.04.02
//  Version................: 1.0
//==============================================================================                          

//================================================================================
// Library Links
//================================================================================
#include <stdio.h>

//================================================================================
// Symbolic Constants
//================================================================================

//================================================================================
// Global Variables
//================================================================================

//================================================================================
// UDF Prototypes
//================================================================================
int l_factorial(int n);

//================================================================================
// Main Function
//================================================================================
int main() {
      int n = 4;
      printf("%d\n", l_factorial(n));

      return 0;
}

//================================================================================
// Function l_factorial:   returns the factorial of n (n!)
//================================================================================
int l_factorial(int n) {
	// This "if" control block makes sure the factorial function is defined only for positive numbers including 0: N(0)
	if (n < 0)
		return -1;
	else
		if (n < 2)
			return 1;
		else
			return n * l_factorial(n - 1);
}

//================================================================================
// EOF
//================================================================================
