#include <iostream>

int main() { 
  
int length , width;
  bool finishes = false;
  
do {
  std::cout << "Enter the length of the rectangle: ";
  std::cin >> length;
  std::cout << "Enter the width of the rectangle: ";
  std::cin >> width;
  std::cout << "The area of the rectangle is: " << length * width << std::endl;
  std::cout << "The perimeter of the rectangle is: " << 2 * (length + width) << std::endl;
  
  char choice;
  std::cout << "Do you want to calculate another rectangle? (y/n): ";
  std::cin >> choice;
  if (choice == 'n' || choice == 'N') {
    finishes = true;
  }
} while (finishes == false);
  
  
}
