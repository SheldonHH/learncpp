#! /bin/bash
filename=$1
temp="${filename%%.cpp}"
clang++ $temp.cpp -o $temp.out && ./$temp.out

# put this file in /usr/local/bin