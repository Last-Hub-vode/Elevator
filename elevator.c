#include <stddef.h>
#include <stdio.h>
#include "math.h"

int main() {
int floor=1;
printf("Where to go?\n");
scanf ("%d", &floor);
printf("\n");

// Find the last digit and print where you are.
int lastdigit=findfloor(floor);
switch (lastdigit) {
  case 1:
  printf ("You are at the %dst floor\n", floor);
  break;
  case 2:
    printf ("You are at the %dnd floor\n", floor);
  break;
  case 3:
  printf ("You are at the %drd floor\n", floor);
  break;
  default:
    printf ("You are at the %dth floor\n", floor);
    }
}


