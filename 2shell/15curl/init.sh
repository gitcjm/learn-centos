LOCAL_VER=`cat version`
REMOTE_VER=`curl http://www.jtthink.com/test/conf.txt -s | sed -n '2p'`
# echo $LOCAL_VER " " $REMOTE_VER
if [ $REMOTE_VER -gt $LOCAL_VER ]
then
	echo "begin update"
	GET_UPDATE=`curl -d "password=123" http://www.jtthink.com/test/update.php -s`
	# echo $GET_UPDATE
	wget $GET_UPDATE
	echo "2" > version
	echo "end update"
fi
