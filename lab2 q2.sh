#!/bin/bash

#this is question no.2

echo "what is your name?"

read NAME

mkdir $NAME

cd $NAME

for D in 1 2 3 4 5

do
 
touch $NAME$D.cpp

echo "$NAME$D.cpp"

done

