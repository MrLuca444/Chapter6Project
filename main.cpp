#include <iostream>
int main() {
int f = 0;
  double c = (5/9) * (f-32);
  std::cout << "F|C" << std::endl;
  std::cout << "---" << std::endl;
  for (; f < 21;){
    std::cout << f << "|" << c << std::endl;
    f++;
  }
  
}