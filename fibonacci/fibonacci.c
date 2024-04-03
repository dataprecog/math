//==============================================================================                          
// 
//==============================================================================                          
//  Description............: Fibonacci series using recursion
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
int l_fibonacci(int n);

//================================================================================
// Main Function
//================================================================================
int main() {
      int n = 6;
      printf("%d\n", l_fibonacci(n));

      return 0;
}

//================================================================================
// Function l_fibonacci:   returns the nth value of the Fibonacci sequence
//================================================================================
int l_fibonacci(int n) {
      if (n <= 1)
          return n;
      return l_fibonacci(n - 1) + l_fibonacci(n - 2);
}

//==============================================================================                          
// EOF
//==============================================================================                          
