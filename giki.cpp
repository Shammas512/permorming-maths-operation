#include <iostream>
#include <bits/stdc++.h>
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

int printDivisors(){

int n ;
cin >> n;
vector <int> divisors ;

for (int i = 1; i*i <= n; i++)
{
    if (n%i==0) 
    {
        divisors.push_back(i);
        if (n/i != i)
        {
         divisors.push_back(n/i);
        }

        
    }
    
}
sort(divisors.begin(),divisors.end());

for(auto it : divisors) cout <<it  << " ";

    
return 0;
}

int checkingNumberisPrime(){
 int n ;
cin >> n;
int factors = 0;


for (int i = 1; i*i <= n; i++)
{
    if (n%i==0) 
    {
    factors ++;
    
    if (n/i != i) factors ++;
    {
        /* code */
    }
    
    }
    
}
if (factors==2) cout << "prime";
else cout << "not prime";
return 0;
}


int hcf(){
    int num1,num2;
    cout << "Enter number 1 and number 2 " <<endl;
    cin >> num1 >> num2;
    while (num1!=0 && num2!=0)
    {
        if (num1>num2) num1= num1%num2;
        else num2 =num2%num1;
       
    }
    if (num1==0)cout << num2;
    else cout << num1;
   
    
    
}

int reverse(){
    
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

int main() {
  hcf();
 return 0;
}