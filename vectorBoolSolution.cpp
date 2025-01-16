#include <iostream>
#include <vector>
#include <bitset>

int main() {
  // Problematic code using std::vector<bool>
  std::vector<bool> vec1(10, false);
  std::vector<bool> vec2 = vec1; // Potential issue here
  vec2[0] = true;
  std::cout << "vec1[0]: " << vec1[0] << std::endl; // Might be true due to non-standard behavior


  // Solution using std::bitset
  std::bitset<10> bitset1;
  std::bitset<10> bitset2 = bitset1;
  bitset2[0] = true;
  std::cout << "bitset1[0]: " << bitset1[0] << std::endl; // Correctly remains false

  return 0;
}
