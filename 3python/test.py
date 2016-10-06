#! /usr/local/bin/python

import sys

print sys.platform
print 'please input your name:'
get_input = sys.stdin.readline()
print 'hello ' + get_input
