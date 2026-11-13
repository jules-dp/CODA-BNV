#!/bin/bash

echo "Indiquer un nombre de minutes : "
read temps

res=$((temps/60))

min=$((temps%60))

echo $res "heure" $min "min"

