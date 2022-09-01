#include <stdio.h>

int main(){
    printf("How many eggs do you have: ");
    int cans;
    scanf("%i", &cans);
    double dozen = (double) cans / 12;
    printf("you have : %f dozens of eggs\n",dozen);
  return 0;
}
