#include <stdio.h>






int main() {
// declare variable types
int height, length, width, volume, weight;

// variable assignments
height = 8;
length = 12;
width = 10;

// compute results
volume = height * length * width;
weight = (volume + 165) / 166;

// print results
printf("Dimensions: %d times %d times %d\n", length, width, height);
printf("Volume (cubic inches): %d\n", volume);
printf("Dimensional weight (pounds): %d\n", weight);
return 0;
}
