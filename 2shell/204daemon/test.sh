# Source function library.
. /etc/rc.d/init.d/functions

CJMPID=`cat "/var/run/sshd.pid"`
echo $CJMPID

SSHD=/usr/sbin/sshd
echo `pidofproc $SSHD` >sshd.pid
