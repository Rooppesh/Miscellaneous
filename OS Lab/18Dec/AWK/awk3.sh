echo "The Length of the longest line is"
awk '{ if(length ($0) >max)
		max=length($0)}
	END {print max}' hello.txt
