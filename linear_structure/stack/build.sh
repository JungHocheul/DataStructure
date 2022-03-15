#!/bin/bash

make clean;make

value=stack
cp -rp ./$value ./../bin
rm -rf ./$value
