#!/bin/bash 
echo "Building CringeCulator..."
rm -rf build
mkdir build
cd build
cmake ..
make
cp CringeCulator ..
cd ..
rm -rf build
if [[ $1 = --run ]]; then
./CringeCulator
fi