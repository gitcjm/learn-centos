# 判断god用户是否存在，不在，则创建，并设置密码为"123"
USER_COUNT=`cat /etc/passwd | grep ^god: -c`
USER_NAME="god"
if [ $USER_COUNT -ne 1 ]
then
	useradd $USER_NAME
	echo "123" | passwd $USER_NAME --stdin
	echo "user is created done"
else
	echo "user exists"
fi
