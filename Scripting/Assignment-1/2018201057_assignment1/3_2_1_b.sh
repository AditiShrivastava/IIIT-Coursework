#!/bin/bash

awk -F" " 'NR==1, NR==4 {print $1,$2,$5}' marks.txt
