OBJECTS= main.o pair.o

main: $(OBJECTS)
	$(CXX) $^ -o  $@


clean:
	$(RM) main *.o
