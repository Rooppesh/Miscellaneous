sed -n '5,10p' source.txt > test.txt
sed '1,10d' source.txt > test2.txt
sed -i 's/are/ARE/' test.txt
sed 's/\..*//g' num.txt >test3.txt
