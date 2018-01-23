#include <stdio.h>
#include <stddef.h>
#include <ctype.h>
#include "isogram.h"


int len(char *input) {
  int i = 0; 

  while (input[i] != '\0') {
    i += 1;
  }
  
  return i;
}

int get_alph_pos(char c) {
  char alph[] = "abcdefghijklmnopqrstuvwxyz";

  for(int i = 0; i < len(alph); i++) {
    if (tolower(c) == alph[i]) {
      return i;
    }
  }

  return -1;
}

int is_isogram(char input[]) {

  if (len(input) == 0) return 1;
  int letters_detected[26];

  for(unsigned long i = 0; i < sizeof(letters_detected)/sizeof(int); i++) {
    letters_detected[i] = 0;
  }

  for(int i = 0; i < len(input); i++) {
    int pos = get_alph_pos(input[i]);

    if (pos != -1) { //we now know it is a letter
      if (letters_detected[pos] == 0) {
        letters_detected[pos] = 1;
      } else {
        return 0;
      }
    }
  }

  return 1;
}

