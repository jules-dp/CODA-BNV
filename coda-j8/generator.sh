#!/bin/bash

echo "nom de votre projet "
read name

mkdir "$name"

touch "$name/main.c"
touch "$name/Makefile"
touch "$name/fonction.c"
touch "$name/fontion.h"




