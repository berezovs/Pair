main: main.o pair.o 
  g++ main.o pair.o

main.o: main.cpp pair.hpp
  g++ -c main.cpp

pair.o: pair.cpp pair.hpp
  g++ -c pair.cpp  

clean:
  rm a.out *.o
