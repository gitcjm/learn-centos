# 判断god用户是否存在，不在，则创建，并设置密码为"123"
USER_COUNT=`cat /etc/passwd | grep ^god: -c`
USER_NAME="god"
if [ $USER_COUNT -ne 1 ]; then
	useradd $USER_NAME
	echo "123" | passwd $USER_NAME --stdin
	echo "user god is created done"
fi

# 以god用户身份创建~/bin目录
if [ ! -d /home/god/bin ]; then
    su - god -c "mkdir bin"
    echo "bin is created done"
fi

# 以god用户身份创建me文件，并使其可执行
if [ ! -f /home/god/bin/me ]; then
	su - god -c "echo 'echo i am god' > bin/me"
	su - god -c "chmod +x bin/me"
	echo "me is created done"
else
	echo "me already created"
fi
