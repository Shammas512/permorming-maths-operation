#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main(){
  int n;
  cin >> n ;
  int arr[n];
  for(int i =0 ; i<n; i ++){
    cout << "Enter Number " << i;
    cin >> arr[i];
  }

  int hash [13] = {0};
  for(int i =0 ;i<n ; i++){
    int in = arr[i];
    hash[in] = hash[in] +1;
  }


  int q ;
  cin >> q;
  while (q--)
  {
    cout << "Enter the number you want to get";
      int index;
      cin>> index;
      cout << hash[index];
  
   }
  return 0; 
}