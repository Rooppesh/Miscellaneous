echo "Enter Number of Wprds to Display"
read a
echo -e "AFTER:-"
grep -A $a "ink" hello.txt
echo "BEFORE:-"
grep -B $a "ink" hello.txt

