echo "Number Of lines that do not match the Word HI:-"
grep -v -c "hi" hello.txt
echo "The Words Are:"
grep -v "hi" hello.txt
echo "Number Of Matching Words Are"
grep -c "hi" hello.txt
