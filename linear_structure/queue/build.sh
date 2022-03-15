#!/bin/bash

make clean;make

value=Queue
cp -rp ./$value ./../bin
rm -rf ./$value
