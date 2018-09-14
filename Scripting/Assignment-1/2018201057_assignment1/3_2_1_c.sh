#!/bin/bash

awk -F" " 'END{printf("%s %s %d",$1,$2,$5)}' marks.txt
