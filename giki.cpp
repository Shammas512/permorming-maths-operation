#include <iostream>
using namespace std;

int palindromeNum(){ 
     int n;
   cout << "Enter number " <<endl;
   cin>> n;
   int mynum = n ;
   int revNum= 0;
 
   while(n>0){
    int ld = n%10;
    n= n/10;
    revNum = (revNum * 10) + ld;
   }
   cout << revNum <<endl;
   if(mynum==revNum) cout << "true";
   
   else cout << "false"; 
   return 0 ;
}

int amstrongNumber(){
  int n;
   cout << "Enter number " <<endl;
   cin>> n;
   int mynum = n ;
   int sum = 0;
 
   while(n>0){
    int ld = n%10;
    n= n/10;
     sum = sum +(ld*ld*ld);
   }
   cout << mynum <<endl;
   if(mynum==sum) cout << "true";
   
   else cout << "false";
   
   return 0 ;
}

int main() {
 amstrongNumber();
 return 0;
}