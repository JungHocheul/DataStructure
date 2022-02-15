#!/bin/bash

git add .
git commit -m "test commit"
git branch -M main
git remote add origin https://github.com/JungHocheul/OS_implementation.git
git push -u origin main
