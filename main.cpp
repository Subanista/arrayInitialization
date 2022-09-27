#include <iostream>

int main() {
  std::cout << "runtime initialization for 1D in array \n";

  int i, n, a[10];
  std::cout << "enter the number of elements \n";
  std::cin >> n;
  std::cout << "enter the  elements to the 1D array \n";
  for( i=0; i<n; i++){
    
    std::cin >> a[i];
  }
  std::cout << "print the values of 1D array\n";
  for(i=0;i<n;i++){
   std::cout << a[i];
    std::cout<< " \n";
    }

    int m,j,k,b[3][3];
    std::cout << "runtime initialization for 2D in array \n";
    
   std::cout << "enter the  elements to the 2D array \n"; 
    for(j=0;j<3;j++)
      {
      for(k=0;k<3;k++){
        std::cin>>b[j][k];
      }
        }
  std::cout << "print the values of 2D array\n";
 for(j=0;j<3;j++)
      {
      for(k=0;k<3;k++){
        std::cout<<b[j][k];
        
      }
        std:: cout<< " \n";
        }

    
  
}