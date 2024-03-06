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
if (lastdigit == 1) {
  printf ("You are at the %dst floor\n", floor);
} else {
    if (lastdigit == 2) {
  printf ("You are at the %dnd floor\n", floor);
} else {
    if (lastdigit == 3) {
  printf ("You are at the %drd floor\n", floor);
} else {
    printf ("You are at the %dth floor\n", floor);
    }
}
}

}