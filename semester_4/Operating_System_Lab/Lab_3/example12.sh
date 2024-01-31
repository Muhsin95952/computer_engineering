echo Enter the first number 
read num1
echo Enter second number
read num2
echo Enter the third number 
read num3
if test $num1 -gt $num2
then
       	if test $num1 -gt $num3
	then
		echo $num1 is the largest
	else
		echo $num3 is largest
	fi
else
	if test $num2 -gt $num3
	then
		echo $num2 is largest
	else 
		echo $num3 is the largest
	fi
fi

