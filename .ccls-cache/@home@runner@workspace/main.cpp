#include <iostream>
int main() {
  int north, south, east, west;
  std::cout << "How many accidents were in North Tallahassee last year?" << std::endl;
  std::cin >> north;
  std::cout << "How many accidents were in South Tallahassee last year?" << std::endl;
  std::cin >> south;
  std::cout << "How many accidents were in East Tallahassee last year?" << std::endl;
  std::cin >> east;  
  std::cout << "How many accidents were in West Tallahassee last year?" << std::endl;
  std::cin >> west;
  
  int lowest = north;
  if (south < lowest) lowest = south;
  if (east < lowest) lowest = east;
  if (west < lowest) lowest = west;
  
  std::cout << "The lowest number of accidents was: " << lowest << std::endl;
  return 0;
}