#include <algorithm>
#include <iostream>
#include <vector>

// Way more simple approach to the given problem was to use unique operator
int main() {

  std::vector<int> numbers = {1, 1, 2, 2, 3, 1, 2, 4, 3};

  std::vector<int>::iterator it;
  it = std::unique(numbers.begin(), numbers.end());
  std::cout << *it << std::endl;

  return 0;
}
