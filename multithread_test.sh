#! /bin/bash
x=0
while [ $x -lt 6 ]
do
    time ./a.out &
    x=$(( $x + 1 ))
done
wait