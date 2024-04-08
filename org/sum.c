#include <stdio.h>






#include <stdio.h>
int main() {
  // declare and initialize variables n (integers) and sum
  long int n, sum = 0;
  // ask for and scan first integer
  puts("Enter integers separated by space, finish with 0:");
  scanf("%ld",&n);
  // begin loop while scanned integer non-zero
  while (n != 0) {
    // add new integer to sum
    sum += n;
    // scan integer
    scanf("%ld",&n);        
  } // end loop
  // print the sum
  printf("\nSum = %ld\n", sum);
  return 0;
}
