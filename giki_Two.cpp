#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
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