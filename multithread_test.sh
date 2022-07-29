#! /bin/bash
x=0
while [ $x -lt 8 ]
do
    ./a.out &
    x=$(( $x + 1 ))
done
wait