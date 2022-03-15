#!/bin/bash

make clean;make

value=D_Queue
cp -rp ./$value ./../bin
rm -rf ./$value
