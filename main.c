#include "isort.h"
#include <stdio.h>
#define LEN 50


int main () {
int a[LEN];
    int i, j;
    printf("Enter 50 numbers: ");

    for (i=0; i < LEN; i++) {
      scanf("%d",(a+i));
    }
    insertion_sort(a,LEN);
    for (j=0; j < LEN; j++) {
      printf("%d",a[j]);
      printf(",");
    }  
    return 0;
}
