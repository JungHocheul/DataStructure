#!/bin/bash

make clean;make

value=D_linked
cp -rp ./$value ./../bin
rm -rf ./$value

mv *.o ./obj/.
