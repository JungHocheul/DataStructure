#!/bin/bash

make clean;make

value=s_linked
cp -rp ./$value ./../bin
rm -rf ./$value

mv *.o ./obj/.
