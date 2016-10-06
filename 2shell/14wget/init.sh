# 判断当前目录下是否存在d.zip文件，如无，则从wwww.jtthink.com/test/d.rar下载，
# 并另存为d.zip

ZIP_FILE="d.zip"
SRC_RARFILE="www.jtthink.com/test/d.rar"

if [ ! -e $ZIP_FILE ]
then
    wget -O $ZIP_FILE $SRC_RARFILE
fi

# 判断当前目录下是否存在licence文件，如果不存在，则从www.jtthink.com/test/conf.txt
# 下载conf.txt文件。然后，读取该文件的第一行并保存为licence文件。

LIC_FILE="licence"
SRC_CONFFILE="www.jtthink.com/test/conf.txt"
CONF_TXT="conf.txt"

if [ ! -e $LIC_FILE ]
then
	if [ ! -e $CONF_TXT ]
	then
		wget -O $CONF_TXT $SRC_CONFFILE
	fi
	sed -n '1p' $CONF_TXT > $LIC_FILE
fi

echo "licence is created"
# rm -f $CONF_TXT
echo "init done"
