touch males.txt females.txt
awk ' $2=="M" {printf("%s\n",$0)}' marks.txt >males.txt
awk ' $2=="F" {printf("%s\n",$0)}' marks.txt >females.txt
