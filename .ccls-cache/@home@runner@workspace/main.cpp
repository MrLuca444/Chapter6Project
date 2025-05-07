#include <iostream>
int main() {
  int north, south, east, west;
  do {
    std::cout << "How many accidents were in North Tallahassee last year? (must be >= 0): ";
    std::cin >> north;
  } while (north < 0);

  do {
    std::cout << "How many accidents were in South Tallahassee last year? (must be >= 0): ";
    std::cin >> south;
  } while (south < 0);

  do {
    std::cout << "How many accidents were in East Tallahassee last year? (must be >= 0): ";
    std::cin >> east;
  } while (east < 0);

  do {
    std::cout << "How many accidents were in West Tallahassee last year? (must be >= 0): ";
    std::cin >> west;
  } while (west < 0);
  
  int lowest = north;
  if (south < lowest) lowest = south;
  if (east < lowest) lowest = east;
  if (west < lowest) lowest = west;
  
  std::cout << "The lowest number of accidents was: " << lowest << std::endl;
  return 0;
}