QueueDemo: main.o Queue.o Test.o
	g++ -g -Wall -std=c++11 main.o Queue.o Test.o -o QueueDemo

main.o: main.cpp Test.h
	g++ -g -std=c++11 -c main.cpp

Test.o: Test.cpp 
	g++ -g -std=c++11 -c Test.cpp

run: QueueDemo
	./QueueDemo

m:
	valgrind ./QueueDemo

clean:
	rm main.o QueueDemo Test.o