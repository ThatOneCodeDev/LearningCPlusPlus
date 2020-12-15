@echo off

echo building .o from all present .cpp files with flag -c
echo optionally build with: g++ -Wall -std=c++17 main.cpp -o main
g++ -Wall -std=c++17 -c *.cpp

echo building exe from all present .o files
g++ -Wall -std=c++17 *.o -o main 

echo done!