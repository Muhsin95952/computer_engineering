while echo "Please enter comand"
	read response
do
	case "$response" in
		'done') break           #no more commands
		;;
		"") continue #null command
		;;
		*) eval $response     #do the command
			;;
	esac
done

