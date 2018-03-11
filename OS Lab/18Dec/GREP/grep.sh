echo "Enter a Word To Search"
read a
echo "Highlighting Searches"
export GREP_OPTIONS='--color=auto'
GREP_COLOR="100;8"
grep $a hello.txt
