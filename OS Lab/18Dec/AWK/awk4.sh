echo "Enter Number to be found & Written"
read i
awk '/'$i'/{print '$1'}' hello.txt > hi.txt
