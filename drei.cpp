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


    int main(){
    vector <int> numbers =  {1,3,5,7,9};
    swappingTwo(numbers,0);
    for (int it : numbers) cout << it  << " ";
    return 0;
    }


 