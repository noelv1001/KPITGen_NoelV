/* Program to find Average */

#include<stdio.h>

double getAverage(int arr[],int size);

void main()
{
  int balance[5]={100,2,4,17,50};
  double avg;
  avg=getAverage(balance,5);
  printf("Average=%f",avg);
}

double getAverage(int arr[],int size)
{
  int i;
  double avg;
  int sum;
  for(i=0;i<size;i++)
  {
    sum+=arr[i];
  }
  avg=sum/size;
  return avg;
}
