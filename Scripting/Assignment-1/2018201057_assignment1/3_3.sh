#!bin/bash
awk -F [\(\)"	"] '{
	split($1,aa,".")
	if(NR==1)
		{
			printf("[\n")
			printf("\t{\n")
		
 printf("\t\"ID\" : \"%s\" ,\n", aa[1])
 printf("\t\"Name\" : \"%s\" ,\n",aa[2])
printf("\t\"Year\" : \"%s\" ,\n", $2)
printf("\t\"Rating\" : \"%s\"\n", $4)
}
else
	{
		printf("\t} ,\n")
		printf("\t{\n")
		printf("\t\"ID\" : \"%s\" ,\n", aa[1])
		printf("\t\"Name\" : \"%s\" ,\n",aa[2])
		printf("\t\"Year\" : \"%s\" ,\n", $2)
		printf("\t\"Rating\" : \"%s\"\n", $4)
	}
}
END{printf("\t}\n]")}' imdb-top-250.txt >imdb-top-250.json
