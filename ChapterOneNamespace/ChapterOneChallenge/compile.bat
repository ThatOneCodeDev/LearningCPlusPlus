@echo off
echo Compiling...

echo making output files...
g++ -Wall -std=c++17 -c *.cpp

echo building from output files...
g++ -Wall -std=c++17 *.o -o main

echo Finished!