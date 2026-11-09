#!/bin/bash
g++ main.cpp res.res -o SquareGame1.9 -lraylib -lGL -lm -lpthread -ldl -lrt -lX11 -lyaml-cpp
echo "Compile Done!"
read -n 1 -s -p "Press any key to continue..."
echo ""
