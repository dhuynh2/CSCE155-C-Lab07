/**
 * Author: Diane Huynh
 * Date: 2020/09/29
 *
 *
 *
 */

#include<stdlib.h>
#include<stdio.h>

#include "stats.h"

//TODO: fix the error in this function
void readInArray(int *arr, int size) {
  int i;
  printf("Enter your list of numbers: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
  return;
}

int * generateRandomArray(int size) {
  int * randomArr = malloc(sizeof(int) * size);
  for(int i=0; i<size; i++) {
    randomArr[i] = rand();
  }
  return randomArr;
}

void printArray(const int *arr, int size) {
  printf("[");
  for(int i=0; i<size-1; i++) {
    printf("%d, ", arr[i]);
  }
  printf("%d]\n ", arr[size-1]);
}
//functino finds the mean of all the values in the array
double getMean(int *arr, int size) {
  double sum, average;
  for(int i = 0; i < size; i++){
    sum += arr[i];
  }
  average = sum / size;
  return average;
}
//function finds the lowest value in the array
int getMin(int *arr, int size) {
  int minimum;
  minimum = arr[0];
  for(int i = 0; i < size; i++){
    if(arr[i] < minimum){
      minimum = arr[i];
    }
  }
  return minimum;
}
//the function finds the maximun value in the array
int getMax(int *numArr, int size) {
  int maximum;
  maximum = numArr[0];
  for(int i = 0; i < size; i++){
    if(numArr[i] > maximum){
      maximum = numArr[i];
    }
  }
return maximum;
}
