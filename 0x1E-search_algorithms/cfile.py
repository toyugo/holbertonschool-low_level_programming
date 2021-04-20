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
tb = ['0-hbtn_status.py','1-hbtn_header.py','2-post_email.py','3-error_','4-hbtn_status.py','5-hbtn_header.py','6-post_email.py','7-error_','8-json_api.py','10-my_github.py','100-github_commits.py']
createfile(tb, 'py', )

def extractName(url):
output = ""
with open('index.html') as f:
    for a in f:
        if "File: " in a:
            #file = a.split('Prototype: ')
            file = a.split('code')
            filef = file[1].replace('>', '')
            filef = filef.replace('</', '')
            #print("'"+filef + "',", end="")
            output = output + ",'" + filef + "'"
print(output)