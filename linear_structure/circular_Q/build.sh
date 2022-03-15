#!/bin/bash

make clean;make

value=C_Queue
cp -rp ./$value ./../bin
rm -rf ./$value
