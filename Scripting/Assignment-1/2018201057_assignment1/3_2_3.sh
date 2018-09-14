#!/bin/bash

awk -F" " 'NR!=1 {printf("%s %d\n",$1,$3+$4+$5)}' marks.txt

