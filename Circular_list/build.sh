#!/bin/bash

make clean;make

value=c_linked
cp -rp ./$value ./../bin
rm -rf ./$value
