echo "Checking Whether the HI is Present or Not"
awk '{ if ($1=="hi")
	print $0
     }' hello.txt 	
