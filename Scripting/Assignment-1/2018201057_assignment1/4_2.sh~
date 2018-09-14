#!/bin/bash

password=$1
   
    if [ ${#password} -lt 8 ]
    then
        echo "weak password"
   
    elif [ `echo $password | grep -c -E "[0-9]+"` -eq 0 ]
    then
        echo "weak password"
   
    elif [ `echo $password | grep -c -E "[@#$%&*=+-]+"` -eq 0 ]
    then
        echo "weak password"

   else
     for((i=4;i<=${#password};i++))
    do
        for((j=0;j<=${#password}-$i;j++))
        do
            if [ `grep -c -E "^${password:$j:$i}$" dictionary.txt` -gt 0 ]
            then
                echo "weak password"
  	     else
		echo "strong password"          
	    fi
        done
    done
fi

