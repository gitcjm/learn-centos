# learn shell script

ERR_LOGFILE="error.log"
CUR_TIME=`date +'%Y-%m-%d %H:%M:%S'`

if [ -e $ERR_LOGFILE ]	# if test $ERR_LOGFILE
then
    echo "add log at $CUR_TIME" >> $ERR_LOGFILE
else
    echo -e "log init at $CUR_TIME" > $ERR_LOGFILE
fi

