#include <iostream> 
using namespace std; 

void weird_algo(int n){
  while (n != 1){
    if (n % 2 == 0){
      n = n / 2;
      cout << n << endl;
    }
    else{
      n *= 3;
      n += 1;
      cout << n << endl; 
    }  
  }
}

int main(){
  int x; 
  cin >> x; 
  weird_algo(x); 
  return 0; 
}