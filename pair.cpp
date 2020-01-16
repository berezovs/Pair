#include "pair.hpp"


Pair::Pair(int first, int second){
  this->first = first;
  this->second = second;
}

Pair::Pair(){

}



void Pair::setFirst(int newFirst){
  first = newFirst;
}

int Pair::getFirst(){
  return first;
}

void Pair::setSecond(int newSecond){
  second = newSecond;
}

int Pair::getSecond(){
  return second;
}