#!/bin/bash
awk  'BEGIN{
sum=0
mean=0
i=0
max=0
}(NR>1){ 
marks=0
marks=$3+$4+$5
if ( max < marks ){
max=marks
y=$1
}
student[i]=$1
score[i]=marks
i+=1
sum+=marks
}
END{
printf("Topper is %s  %d\n",y,max)
mean=sum/(NR-1)
for(j=0;j<NR-1;j++)
{
if(score[j]>mean)
{
printf("%s\n", student[j])
}}}'   marks.txt


