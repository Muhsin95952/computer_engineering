a=10
b=20
if [ $a -eq $b ]
then
	echo "A equal to B"
elif [ $a -gt $b ]
then
	echo "A is greater than B"
elif [ $a -lt $b ]
then
	echo "A is less than B"
else
	echo "None of the condition met"
fi
