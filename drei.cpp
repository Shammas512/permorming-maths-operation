#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void swapping( vector <int> &numbers , int f,int l){
    if (f>=l) return ;
    swap(numbers[f],numbers[l]);
    swapping(numbers,f+1,l-1);
    
    }


    int main(){
    vector <int> numbers =  {1,4,5};
    swapping(numbers,0,numbers.size()-1);
    for (int it : numbers) cout << it  << " ";
    return 0;
    }