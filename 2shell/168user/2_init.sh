USER_NAME="god"

# 不判断用户是否存在，直接干
# 0--stdin; 1--stdout; 2--stderr;
# /dev/null 黑洞、垃圾箱、代表一个空设备
useradd $USER_NAME 2> /dev/null
# 上一条命令如果执行成功，则设置密码
if [ $? -eq 0 ]
then
	echo "123" | passwd $USER_NAME --stdin
	#echo "done"
#else
	#echo "error"
fi

# 以god用户身份创建~/bin目录，并创建可执行文件me
if [ ! -d /home/god/bin ]; then
	su - god -c "mkdir bin"
	echo "bin is created"
fi
su - god -c "echo 'echo i am god' > bin/me"
su - god -c "chmod +x bin/me"
