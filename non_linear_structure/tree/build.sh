#!/bin/bash

make clean;make

value=tree
cp -rp ./$value ./../bin
rm -rf ./$value

mv *.o ./obj/.
