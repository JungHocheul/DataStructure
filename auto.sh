#!/bin/bash

git add -A
echo -n "Commit comment>"
read comment
git commit -m "$comment"
git branch -M main
git remote add origin https://github.com/JungHocheul/DataStructure.git
git push -u origin main
