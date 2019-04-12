/*
Jared Holzmeyer
Dr. Morse
CS315
4/11/2019
Assignment 2
maxpath.c
*/

#include <stdlib.h>
#include "maxpath.h"
#include <stdio.h>

int maxPathTotal(int depth, int* triangle) {
  int size;
  
  //int size = sizeof(triangle)/sizeof(triangle[0]);
  printf("last leaf at index %d\n", size);
  int firstLeaf = size - depth;
  return firstLeaf;
}

// for testing purposes only
int main()
{
  int A[] = {3, 7, 4, 2, 4, 6, 8, 5, 9, 3};
  int leaf = maxPathTotal(4, A);
  printf("last leaf at index %d\n", leaf);
  return 0;
}
