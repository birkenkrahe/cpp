#include <stdio.h>






int main() {
int n, sum = 0;
puts("Enter integers (0 to terminate): ");
scanf("%d", &n);  printf("%d ", n); // need non-0 number to start

while ( n != 0 ) {
  sum += n;         // sum = sum + n
  scanf("%d", &n); printf("%d ", n);
 }

printf("\nThe sum is %d\n", sum);
return 0;
}
