main: main.o functions.o
	g++ -o main main.o functions.o

main.o: main.cpp functions.h
	g++ -c main.cpp

functions.o: functions.cpp functions.h
	g++ -c functions.cpp

clean:
	rm -f main.o
help:
	@echo "Targets: main"
	@echo "         clean"
	@echo "         help"

