#!/bin/usr/python3
k = 0
""" Get prototype """

with open('index.html') as f:
    for a in f:
        if "File: " in a:
            file = a.split('File: ')
            file = a.split('code')
            filef = file[1].replace('>', '')
            filef = filef.replace('</', '')
            print("'"+filef + "',", end="")
            #print(filef)


