#include <iostream>
#include <iterator>
#include <map>
#include <vector>

int main() {

  std::vector<int> numbers = {1, 2, 1, 2, 3, 3, 4};
  std::map<int, int> list;

  // Building the map using each number in the vector as my key
  for (int i : numbers) {
    list[i] = 0;
  }

  // Here I am going over each element in the vector of numbers and checking and
  // adding 1 to each value in the map everytime is repeated
  for (int i : numbers) {
    if (list.find(i) != list.end()) {
      list[i]++;
    }
  }

  // Used c++ 17 in order to loop over a  map - auto is used to auto complete
  // the type of the variables key and value
  for (auto &[key, val] : list) {
    if (val == 1) {
      std::cout << "The Unique value in the Vector of numbers is: " << key
                << std::endl;
    }
  }

  return 0;
}
