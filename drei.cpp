#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swapping( vector <int> &numbers , int f,int l){
    if (f>=l) return ;
    swap(numbers[f],numbers[l]);
    swapping(numbers,f+1,l-1);
    
    }

  void swappingTwo(vector<int> &numbers, int f ){
     if(f>= (numbers.size()-f-1)) return ;
     swap(numbers[f],numbers[numbers.size()-f-1]);
     swappingTwo(numbers,f+1);
    
   }

   bool ispalindromString(string&s , int f){
    if (f>=s.size()/2) return true;
    if (s[f] != s[s.size()-1-f]) return false;
    return ispalindromString(s,f+1);
    
    
   }


    int main(){
    string s = "massam";
     cout << ispalindromString(s,0);
    }


 