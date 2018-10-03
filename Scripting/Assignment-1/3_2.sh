#!/bin/bash

awk  'BEGIN{
mean=0
sum=0
itr=0
max=0
}(NR>1){ 
temp=0
temp=$3+$4+$5
if ( max < temp ){
max=temp
res=$1
}
sutdent[itr]=$1
array[itr]=x
itr+=1
sum=temp+sum
}
END{
printf("Topper is %s  %d",res,max)
mean=sum/(NR-1)
for(itr1=0;itr2<NR-1;itr2++)
{
if(array[itr2]>mean)
{
printf("\n%s", student[itr2])
}}}'   marks.txt
