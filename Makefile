all: turtle

turtle: main.cpp turtle.h turtle.cpp
	g++ main.cpp turtle.cpp -o turtle -lsfml-graphics -lsfml-window -lsfml-system -std=c++20 -g

.PHONY: clean
clean:
	clear
	rm -f turtle
