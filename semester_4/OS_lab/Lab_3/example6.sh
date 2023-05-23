echo "1). Date and Time"
	echo
	echo "2). Directory listing"
	echo
	echo "3). User information"
	echo
	echo "Current directory"
	echo
	echo "Enter a choice (1, 2, 3, 4)"
	read choice
	case $choice in
		1) date;;
		2) ls -l;;
		3) who;;
		4) pwd;;
		*) echo "wrong choice"
	esac

