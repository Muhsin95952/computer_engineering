sum=25
while [ $# -gt 0 ]
do 
	sum=`expr $sum + $1`
	shift
done
echo The sum is equal to: $sum
