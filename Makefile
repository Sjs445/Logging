all:
	g++ -o log main.cpp
	./log

clean:
	rm log.txt
	rm log
