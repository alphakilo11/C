#! /bin/bash
# this calls the prime-generator (mt_primes.c). it will only calculate the first x primes when run in one instance.
# with multiple instances there are small deviations as not every 
instances=1

start_value=3
end_value=$((49999999 / $instances))
increment=$(( $instances * 2 ))

#debug
#echo increment: $increment
x=0
while [ $x -lt $instances ]
do
    step=$(( x * 2))
    instance_start_value=$(( start_value + $step))
#    echo instance_start_value: $instance_start_value
    ./a.out $instance_start_value $end_value $increment &
    x=$(( $x + 1 ))
done
wait