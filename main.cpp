#include <iostream>
#include "pair.hpp"

int main() {
  Pair newPair(5,6);
  std::cout<<newPair.getFirst()<<std::endl;
  std::cout<<newPair.getSecond()<<std::endl;
  newPair.setFirst(10);
  std::cout<<newPair.getFirst()<<std::endl;
  newPair.setSecond(15);
  std::cout<<newPair.getSecond()<<std::endl;
}