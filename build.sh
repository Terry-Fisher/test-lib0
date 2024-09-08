#!/bin/bash

# Создание директории для библиотеки, если она не существует
mkdir -p lib

# Компиляция библиотеки
echo "Compiling the library..."
g++ -std=c++23 -fPIC -shared -o lib/libmylib.so lib/lib.cpp

# Компиляция основной программы с указанием пути к библиотеке
echo "Compiling the main program..."
g++ -std=c++23 -o bin bin.cpp -L./lib -lmylib

echo "Build completed!"
