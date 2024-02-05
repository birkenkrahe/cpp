#include <stdio.h>






int main() {
int height;
float profit;
char name;
return 0;
}

#include <stdio.h>






int main() {
int height, length, width, volume;
float profit, loss;
char first_name, surname;
return 0;
}

#include <stdio.h>






int main() {
int height;
height = 8;
return 0;
}

#include <stdio.h>






int main() {
float profit;
profit = 2150.48f;  // 'f' specifies the float format
return 0;
}

#include <stdio.h>






int main() {
/* ASSIGNING A floating point value TO AN integer variable*/
int iProfit = 2150.48;  // Don't do this!

/* ASSIGNING AN integer TO AN floating point variable */
float profit = 2150;  // Don't do this!
return 0;
}

#include <stdio.h>






int main() {
// variable declarations
int height, length, width, volume;

// variable assignments
height = 8;
length = 12;
width = 10;

// variable evaluation
volume = height * length * width;
return 0;
}

#include <stdio.h>






int main() {
int height = 8, length = 12, width = 10;
printf("Volume: %d", height * length * width);
return 0;
}

#include <stdio.h>






int main() {
char c = 'A';
putchar(c);
puts("\nwell done me");
return 0;
}

#include <stdio.h>






int main() {
int height;  // type declaration
height = 8;  // variable assignment

printf("The height is: %d\n", height); // formatted printout
printf("%d",height);
return 0;
}

#include <stdio.h>






int main() {
float profit; // type declaration
profit = 2150.48f; // variable assignment

printf("The profit is: $%f\n", profit); // formatted printout
return 0;
}

#include <stdio.h>






int main() {
float profit;       // type declaration
profit = 2150.48f;  // variable assignment

// formatted printout: 2 digits after decimal point
printf("The profit is: $%.2f\n", profit);
return 0;
}

#include <stdio.h>






int main() {
float profit;       // type declaration
profit = 2150.48f;  // variable assignment

printf("The profit is: $%.8f\n", profit); // formatted printout
return 0;
}

#include <stdio.h>






int main() {
float foo;  // declare float
foo = 3.14f;   // assigned float

// formatting float as float
printf("float as float: %.2f\n", foo);

// formating float as int
printf("float as int: %d\n", foo); // needs %f 

int bar;  // defined int
bar = 314;   // assigned int

// formatting int as int
printf("int as int: %d\n", bar);

// formatting int as float
printf("int as float: %.2f\n", bar);  // needs %d
return 0;
}

#include <stdio.h>






int main() {
int weight, volume;
volume = 12 * 10 * 8;
weight = volume / 166;
return 0;
}

#include <stdio.h>






int main() {
int weight, volume;     // declare variable types
volume = 12 * 10 * 8;   // compute value
weight = volume / 166;  // assign and compute values
printf("The dimensional weight is %d\n",weight); // print result
return 0;
}

#include <stdio.h>






int main() {
int weight, volume;     // declare variable types
volume = 12 * 10 * 8;   // compute value
weight = (volume + 165) / 166;  // assign and compute values
printf("The dimensional weight is %d\n",weight); // print result
return 0;
}
