#include <iostream> 

int main(){
  int rooms;
  double footage, perg;
std::cout <<  "how many rooms would you like to paint?" << std::endl;
 std:: cin >> rooms;
  std::cout << "what is the combined area of the rooms in square feet?" << std::endl;
  std::cin >> footage;
  std::cout<< "how much are you willing to spend on paint per gallon?" << std::endl;
  std::cin >> perg;
  std::cout << "BREAKDOWN" << std::endl;
  double paint = footage/110;
  std::cout << "Gallons of paint required " << paint << std::endl;
  double labor = footage/110 * 8;
  std::cout << "Labor hours required " << labor << std::endl;
  double paintcost = paint * perg;
  std::cout << "Paint cost " << paintcost << std::endl;
  double laborcost = labor * 25;
  std::cout << "Labor cost " << laborcost << std::endl;
  double totalcost = paintcost + laborcost;
  std::cout << "Total cost " << totalcost << std::endl;
  return 0;
}
