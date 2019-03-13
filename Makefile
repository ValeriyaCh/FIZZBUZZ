all: fizzbuzz

fizzbuzz: unittest.cpp
	g++ -std=c++11 -o fizzbuzz unittest.cpp
