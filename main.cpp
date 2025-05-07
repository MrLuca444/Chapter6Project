#include <iostream>
int main() {
int f = 0;
  std::cout << "F|C" << std::endl;
  std::cout << "---" << std::endl;
  for (; f < 21;){
    int c = static_cast<int>((5.0/9.0) * (f-32));
    std::cout << f << "|" << c << std::endl;
    f++;
  }
  
}