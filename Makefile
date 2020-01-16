CXX= g++
CXXFlags= -c

main: main.o pair.o 
  $(CXX) main.o pair.o -o main

main.o: main.cpp pair.hpp
  $(CXX) $(CXXFlags) -c main.cpp

pair.o: pair.cpp pair.hpp
  $(CXX) $(CXXFlags) -c pair.cpp  

clean:
  rm main *.o
