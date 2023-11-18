#include<iostream>
using namespace std;
void square(int n);
void hollowsquare(int n);
void diagonalsquare(int n);
void rhombus(int n);
void hollowrhombus(int n);
void lefttriangle(int n);
void righttriangle(int n);
void hollowlefttriangle(int n);
void hollowrighttriangle(int n);
void pyramid(int n);
void hollowpyramid(int n);
void invertedpyramid(int n);
void rightarrow(int n);
void leftarrow(int n);
void diamond(int n);
void halfdiamond(int n);
void oneplus(int n);
void x(int n);
int main(){
    int option;
    int p;
    cout<<"DIFFERENT TYPES OF SHAPES AND PATTERNS:\n "<<endl;
    cout<<"1.SQUARE\n2.HOLLOW SQUARE\n3.DIAGONAL SQUARE\n4.RHOMBUS\n5.HOLLOW RHOMBUS\n6.LEFT SIDE TRIANGLE\n7.RIGHT SIDE TRIANGLE\n";
    cout<<"8.HOLLOW LFS TRIANGLE\n9.HOLLOW RFS TRIANGLE\n10.PYRAMID\n11.HOLLOW PYRAMID\n12.INVERTED PYRAMID\n13.RIGHT ARROW\n14.LFET ARROW";
    cout<<" \n15.DIAMOND\n16.HALF DIAMOND\n17.PLUS\n18.loopX\n"<<endl;
    cout<<"ENTER A NUMBER TO SELECT A PATTERN:";
    cin>>option;
   switch(option){
     case 1 : cout<<"\nSo you wanna print square pattern right."<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              square(p);
              break;
     case 2 : cout<<"\noh hollow square!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              hollowsquare(p);
              break;
     case 3 : cout<<"\nnot a bad choice diagonal square"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              diagonalsquare(p);
              break;
     case 4 : cout<<"\na rhombus!!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              rhombus(p);
              break;
     case 5 : cout<<"\na hollow rhombus!!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              hollowrhombus(p);
              break;
     case 6 : cout<<"\nLEFT SIDE TRIANGLE BABY!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              lefttriangle(p);
              break;
     case 7 : cout<<"\nRIGHT SIDE TRIANGLE BABY!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              righttriangle(p);
              break;
     case 8 : cout<<"\nHOLLOW LEFT SIDE TRIANGLE BABY!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              hollowlefttriangle(p);
              break;
     case 9 : cout<<"\nHOLLOW RIGHT SIDE TRIANGLE BABY!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              hollowrighttriangle(p);
              break;
     case 10 : cout<<"\nA PYRAMID GREAT CHOICE!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              pyramid(p);
              break;
     case 11 : cout<<"\nA HOLLOW PYRAMID GREAT CHOICE!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              hollowpyramid(p);
              break;
    case 12 : cout<<"\nA INVERTED PYRAMID GREAT CHOICE!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              invertedpyramid(p);
              break;
    case 13 : cout<<"\nWHERE YOU WANT TO SHOOT THIS RIGHT ARROW!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              rightarrow(p);
              break;
    case 14 : cout<<"\nWHERE YOU WANT TO SHOOT THIS LEFT ARROW!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              leftarrow(p);
              break;
    case 15 : cout<<"\nEXPENSIVE DIAMOND!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              diamond(p);
              break;
    case 16 : cout<<"\nWOW HALF DIAMOND!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              halfdiamond(p);
              break;
    case 17 : cout<<"\nA PLUS PATTERN!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              oneplus(p);
              break;
    case 18 : cout<<"\nTHIS X PATTERN WILL BE PRINTED INFINITE TIMES!"<<endl;
              cout<<"\nEnter a size in Number:";
              cin>>p;
              x(p);
              break;

     default:
             cout<<"Erorr! your selected number is not available";
              break;
              }
return 0;}

void square(int n){
  cout<<"\n";
 for( int i=1; i<=n; ++i) {
 for( int j=1; j<=n;++j){cout<<"*";}
cout<<"\n";}}

void hollowsquare(int n){
for( int i=1; i<=n; ++i) {
 for( int j=1; j<=n;++j){
if(i==1||i==n||j==1||j==n)
 cout<<"*";
else
cout<<" ";}
cout<<"\n";}}

void diagonalsquare(int n){
for(int i=1; i<=n; ++i){

 for(int j=1; j<=n; ++j){
       if(i==1||i==n||j==1||j==i||j==n-i||j==n)
       cout<<"*";
       else
       cout<<" ";}
 cout<<"\n";}}

void rhombus(int n){
for( int i= n ; i>= 1; --i){
for(int j=1; j<=i ; ++j){
cout<<" ";}
for (int k=1 ; k<=n ; ++k){
cout<<"*";}
cout<<"\n";
}}

void hollowrhombus(int n){
for( int i= n ; i>= 1; --i){
for(int j=1; j<=i ; ++j){
cout<<" ";}
for (int k=1 ; k<=n ; ++k){
    if(k==1||i==n||i==1||k==n)
cout<<"*";
else
    cout<<" ";}
cout<<"\n";
}}

void lefttriangle(int n){
 for(int i=1;i<=n; i++){
 for(int j=1;j<=i; j++){cout<<"*";}
 cout<<"\n";}}

 void righttriangle(int n){
 int m=1;
 for(int i=n; i>=1;--i){
   for(int j=1;j<=i;++j){
    cout<<" ";
   }
   for(int k=1;k<=m;++k){
    cout<<"*";
   }
   cout<<"\n";
      m++;
 }}

 void hollowlefttriangle(int n){
 for(int i=1;i<=n; i++){
 for(int j=1;j<=i; j++){
        if(i==1||i==n||j==1||j==i)
        cout<<"*";
       else
        cout<<" ";
 }
 cout<<"\n";}}

 void hollowrighttriangle(int n){
  int m=1;
 for(int i=n;i>=1; i--)
       {
        for(int j=1;j<=i-1; j++){cout<<" ";}

         for(int k=1; k<=m; ++k){
            if(k==1||k==m||m==n )
            cout<< "*";
            else
                cout<<" ";
         }
         cout<<"\n";
          m++;
       }
}

void pyramid(int n){
  int  m=1;
 for(int i=n ; i>=1; --i){
    for(int j=1 ; j<=i; ++j){
     cout<<" ";}
    for(int k=1; k<=2*m-1; ++k){
      cout<<"*"; }
     m++;
    cout<<"\n";}}

void hollowpyramid(int n){
  int  m=1;
 for(int i=n ; i>=1; --i){
    for(int j=1 ; j<=i; ++j){
     cout<<" ";}
    for(int k=1; k<=2*m-1; ++k){
      if(i==n||i==1||k==1||k==2*m-1)cout<<"*";
      else
    cout<<" ";}
     m++;
    cout<<"\n";}}

 void invertedpyramid(int n){
  int  m;
  m=n;
 for(int i=1 ; i<=n; ++i){
    for(int j=1 ; j<=i-1; ++j){
     cout<<" ";}
    for(int k=2*m-1; k>=1; --k){
      cout<<"*"; }
     m--;
    cout<<"\n";}}

void rightarrow(int n){
int m,g;
m=n;
g=n;
    for(int i=1; i<=n; ++i){
        for(int j=0; j<=i; ++j){cout<<" ";}
          for(int k=1 ; k<=m; ++k){cout<<"*"; }
              m--;
              cout<<"\n";}
    for(int i=1; i<=n; ++i){
        for(int j=1; j<=g; ++j){
            cout<<" ";}
        for(int k=1; k<=i+1; ++k ){
            cout<<"*";}
        g--;
        cout<<"\n";}}

void leftarrow(int n){
int spaces,stars=1;
spaces=n-1;
    for(int i=1; i<=n; ++i){
        for (int j=1; j<=spaces; ++j){
        cout<<"*";}
      for (int k=1; k<=stars; ++k){
                cout<<" ";}
    if (i<=spaces){
        spaces=spaces-1;
        stars=stars+2; }
   if (i>spaces){
        spaces=spaces+1;
        stars=stars-2; }
    cout<<"\n";}}

void diamond(int n){
int spaces,stars=1;
spaces=n-1;
    for(int i=1; i<=n; ++i){
        for (int j=1; j<=spaces; ++j){
        cout<<" ";}
      for (int k=1; k<=stars; ++k){
                cout<<"*";}
    if (i<=spaces){
        spaces=spaces-1;
        stars=stars+2;}
   if (i>spaces){
        spaces=spaces+1;
        stars=stars-2;}
    cout<<"\n";}}

void halfdiamond(int n){
int m=1;
for(int i=1;i<=n ;++i){
for(int j=1; j<=m; ++j){
   cout<<"*";}
cout<<"\n";
if(i<=n/2){
 m=m+1;}
if(i>n/2){
m=m-1;}}}

void oneplus(int n){
for(int i=1; i<=n; ++i){
  for(int j=1; j<=n; ++j){
  if(i==n/2||j==n/2)
   cout<<"+";
  else
  cout<<" ";}
  cout<<"\n";}}

void x(int n){
    for(;;){
    for(int i=1; i<=n ; ++i){
            for(int j=1; j<=n; ++j){
                if(j==i||j==n-i+1)
                    cout<<"><";
                else
                cout<<" ";}
    cout<<"\n";}}}
