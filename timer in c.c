#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int num(){
    int number;
    printf("START THE TIMER BY ENTERING 0 :");
    scanf("%d", &number);
    return number;}
    
int main(){
    int s=0,ms=0,minute=0,n, g;
    
    do {
    n=num();
    printf("\e[1;1H\e[2J");
    if(n==0){
    for(int i=1;i<1000000000;++i){
        ms++;
        if(ms==100){ms=0;}
          if(i%100==0){
            for(int j=0; j<1; ++j){
                s=s+1;
                if(s==60){
                minute++;}
                if(s==60){ s=0;}}}
            printf("\e[1;1H\e[2J");
        printf("%d:", minute);
         printf("%d:",s);
          printf("%d",ms);
        
        }}
    else {
        printf("wrong input");
        n=num();
    }}
     while(n!=0);
    return 0;
}
