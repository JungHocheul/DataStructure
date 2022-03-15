#!/bin/bash

gcc main.c

mv a.out stack
value=stack
cp -rp ./$value ./../bin
rm -rf ./$value
