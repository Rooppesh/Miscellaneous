echo "Square Of First n Numbers"
read n
awk 'BEGIN { for(i=1;i<= 3;i++) print "square of", i, "is",i*i; }' 

