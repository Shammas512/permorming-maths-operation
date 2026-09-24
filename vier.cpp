#include <iostream>
#include <bits/stdc++.h>
using namespace std;


  int mostFrequentElement(vector<int>& nums)  {
    int n = nums.size();
    cout << n << endl;
    int greatest = 0;
    int index;
     int mx = *max_element(nums.begin(),nums.end());
     cout << mx << endl;
     int hash[mx + 1] = {0};

     for(int i=0 ;i < n ; i++){
        hash[nums[i]] += 1;
     }
      
    for(int i = 0; i < mx +1  ; i++){
        if(hash[i]> greatest){
        greatest = hash[i];
        cout << greatest << endl;
         index = i;

        }

    }
    cout << index << endl;
    return index;
           
    }

int hashing(){
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

int main(){

vector <int> numbers = {1,2,2,3,3,3};
mostFrequentElement(numbers);
  return 0;
}