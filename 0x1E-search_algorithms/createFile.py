#!/bin/usr/python3
import os
import stat

def createfile(tb, language, destination = ''):
  if language == 'js':
    for i in tb:
      with open(destination + i, "w") as f:
        f.write('#!/usr/bin/node')
  if language == 'py':
    for i in tb:
      with open(destination + i, "w") as f:
        f.write('#!/usr/bin/python3')
  if language == '':
      pass
tb = ['0-linear.c','1-binary.c','2-O','3-O','4-O','5-O','6-O','100-jump.c','101-O','102-interpolation.c','103-exponential.c','104-advanced_binary.c','105-jump_list.c','106-linear_skip.c','107-O','108-O']
createfile(tb, 'py', )
