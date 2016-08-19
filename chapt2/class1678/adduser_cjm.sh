# 判断god用户存在否，不存在，则创建
USER=`cat /etc/passwd | grep ^god:`
# echo $USER
if [ $USER="" ]
then
	useradd god
fi
# 设置密码为"123"
passwd god

# 把程序文件拷贝过来，只能god用户执行，root用户也不能方便地执行
cp ../progfile ./
chown -R god:god progfile

