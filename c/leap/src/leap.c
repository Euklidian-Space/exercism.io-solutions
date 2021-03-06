#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
#include "leap.h"

int is_leap_year(int year) {
  if (year % 4 == 0){
    if (year % 100 != 0) return 1;
    if (year % 100 == 0 && year % 400 == 0) return 1;
  }
  
  return 0;
}
