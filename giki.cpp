#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Enter number " <<endl;
   cin>> n;
   int revNum= 0;
 
   while(n>0){
    int ld = n%10;
    n= n/10;
     
    revNum = (revNum * 10) + ld;
   }

   cout << revNum;
}