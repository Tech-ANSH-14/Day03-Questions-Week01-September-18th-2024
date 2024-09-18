#include <iostream>
using namespace std;

int main(){
  int num;
  cin >> num;
  cout << "Multiplication Table of "<< num << endl;
  for(int i=1;i<=10;++i){
    cout << num << " X " << i << " = " << num*i << endl;
  }
  return 0;
  
}
