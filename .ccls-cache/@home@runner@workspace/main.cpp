#include <iostream>

int main() { 
  
int length , width;
  bool finishes = false;
  char answer;
do{
  std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;
  std::cout << "The area of the rectangle is: " << length * width << std::endl;
  std::cout << "The perimeter of the rectangle is: " << 2 * (length + width) << std::endl;
  std::cout << "Do you want to calculate another rectangle? (y/n): ";
  if (answer == y||Y){
    finishes = true;
  }
} while (finishes == false);
  
  
}
