#include <iostream>

int main() {
  std::cout << "runtime initialization \n";

  int i, n, a[10];
  std::cout << "enter the number of elements \n";
  std::cin >> n;
  std::cout << "enter the  elements to the array \n";
  for( i=0; i<n; i++){
    
    std::cin >> a[i];
  }
  std::cout << "print the values of an array\n";
  for(i=0;i<n;i++){
   std::cout << a[i];
    std::cout<< " \n";
  }
}