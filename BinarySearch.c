#include<stdio.h>
#include<stdlib.h>
int compare(void *a,void *b){
return *(int *)a-*(int *)b;}
int main()
{
    int array_size;
    int i=0,mid, num;
    printf("Enter size for array:");
    scanf("%d",&array_size);
    printf("Enter numbers:\n");
    int x[array_size];
    // enter a number for array
    for(int j =0; j<array_size ; ++j){
     scanf("%d",&x[j]);}
    mid=array_size/2;
    qsort(x,array_size,4,compare);
    printf("search number: ");
    scanf("%d",&num);
    while(i<=array_size){
    if(x[mid]==num){ printf("your element location is:%d",mid); break;}
    if(x[mid]<num){ mid=mid+1;}
    if(x[mid]>num){ mid=mid-1;}
    if(i==array_size){ printf("Not available!");}
    if(mid<0){ printf("Not available!"); break;}
    ++i;}
    return 0;}
