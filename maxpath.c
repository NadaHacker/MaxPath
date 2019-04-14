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
  int size = (depth*(depth+1))/2;
  int level = depth;
  int lastLeaf = (size-1) - depth;
  int counter = 0;
  int rChild;
  int lChild;
  for (int i = lastLeaf; i > -1; i--){
     rChild = i+level;
     lChild = i+(level-1);
     if (triangle[rChild] > triangle[lChild]) {
	triangle[i] = triangle[i] + triangle[rChild];
     }
     else {
	triangle[i] = triangle[i] + triangle[lChild];
     }
     counter++;
     if (counter == (level-1)){
	level = level - 1;
	counter = 0;
     }
  }
  return triangle[0];
}

// for testing purposes only
/* int main() */
/* { */
/*   int A[] = {3, 7, 4, 2, 4, 6, 8, 5, 9, 3}; */
/*   int leaf = maxPathTotal(4, A); */
/*   printf("maxPath: %d\n", leaf); */
/*   return 0; */
/* } */
