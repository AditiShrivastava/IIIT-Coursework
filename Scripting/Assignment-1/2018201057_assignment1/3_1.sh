awk '{
	if(a[$0]==1)
		{}
	else
		{a[$0]=1
		print $0}
}' 
