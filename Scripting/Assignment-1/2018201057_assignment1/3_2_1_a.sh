#!/bin/bash

awk -F" " '{print $1,$2,$5}' marks.txt
