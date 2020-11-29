#!/bin/bash

#remember to chmod 755!
echo Compile started! (bash Approach)

echo Creating object files...
g++ -Wall -std=c++17 -c *.cpp

echo Compiling from all object files...
#optional -o for output name
g++ -Wall -std=c++17 *.o

echo Compile task finished.