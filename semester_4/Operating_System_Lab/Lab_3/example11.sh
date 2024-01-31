echo please enter the user login name?
read Login_name
until who | grep $login_name
do 
	sleep 30
done
echo the user $login_name is logged in
