#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int checkGreat(){
     int n;
  cout << "Enter the number";
  cin >> n;
  int greatest = 0;
  int last = 0;
while (n>0)
{
  last = n%10;
  if (last>greatest)
  {
    greatest= last;
  }
  n = n/10;
  
}
cout << greatest;
return 0;
}

int perfectNumber(){
 int n ;
 cout << "Enter the number" <<endl;
 cin >> n;
 vector <int> factors;
 int sum = 0; 

  for (int i = 1; i*i < n; i++)
  {
    if(n%i==0){
        factors.push_back(i);
        if (n/i==n) continue;
        
        
        if (n/i != i){
        factors.push_back(n/i);
        
       }
        
        
        }
        
    };
    sort(factors.begin(),factors.end());
    for (auto it : factors) cout <<  " " << it <<endl;
    for(auto it : factors) sum = sum + it;
    cout <<  "Sum is " <<sum << endl;
    if (sum==n)
    {
      cout << "Perfect Number";
    }
    else cout << "Not perfect";
    
    return 0 ;
  }

bool isPrime(int n){
 int factors = 0;
  for ( int i = 1; i*i <=n; i++)
  {
    if (n%i==0)
    {
     factors ++;
     if (n/i != i) factors ++ ;
     
     
    }
    
  }
  if (factors==2) return true;
  else return false;  


}

int primeRange(){
 vector <int> numbers;
 int range;
 cout << "Enter Range";
 cin >> range;

 for (int i = 1; i <= range; i++)
 {
    bool real = isPrime(i);
    if(real==true) {
      numbers.push_back(i);

    };
 }
 
 for (auto it : numbers) cout << it  << " ";
 int count = numbers.size();
 cout << count ;
 return count;
  
}


// int lcm(int n1,int n2){
// int num1 = n1;
// int num2 = n2;
//   int leastCommon = 0;
//    while (n1!=0 && n2!=0)
//    {
//    if (n1>n2) n1= n1%n2;
//    else n2 = n2%n1;
//    }
//    if(n1==0) leastCommon = (num1/n2)*num2;
//    else leastCommon = (num2/n1)*num1;
   
  
//    cout << leastCommon;
//  return 0 ;
   
// }
int main(){
//  int n1,n2;
//  cin >> n1 >>n2;
//  lcm(n1,n2);
primeRange();
 return 0 ;
}