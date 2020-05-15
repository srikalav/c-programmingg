#include<stdio.h>
#include<stdlib.h>

 size_t maxSeq(int * array, size_t n){
    int i, count = 1;
    for (i=1; i < n; ++i) {
      if (array[i] > array[i-1]) {
	count += 1;
      } else {
	count = 1;
      }
    }
     return count;
      if(n==0){
       return 0;
     }
  }

