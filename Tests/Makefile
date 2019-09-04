test1: test1.cpp test1Flow.o
	g++ test1.cpp test1Flow.o ../src/Flow.o ../src/System.o ../src/Model.o -Wall -o test1

test2: test2.cpp test2Flow.o
	g++ test2.cpp test2Flow.o ../src/Flow.o ../src/System.o ../src/Model.o -Wall -o test2

test3: test3.cpp test3Flow.o
	g++ test3.cpp test3Flow.o ../src/Flow.o ../src/System.o ../src/Model.o -Wall -o test3

test1Flow.o: test1Flow.cpp
	g++ -c test1Flow.cpp -Wall -o test1Flow.o

test2Flow.o: test2Flow.cpp
	g++ -c test2Flow.cpp -Wall -o test2Flow.o

test3Flow.o: test3Flow.cpp
	g++ -c test3Flow.cpp -Wall -o test3Flow.o

exeTest1:
	./test1

exeTest2:
	./test2

exeTest3:
	./test3