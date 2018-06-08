# -*- coding: utf-8 -*-
"""
Created on Fri Jun  8 22:22:15 2018

@author: Mefisto
"""
import py_func
import os

os.rename('commfile.txt', '_commfile.txt')

with open('_commfile.txt', 'r') as in_file:
    var = in_file.readlines()[0]

command = var.split(' ')

res = py_func.call_func(command)

with open('_commfile.txt', 'w') as out_file:
    out_file.write(res)

os.rename('_commfile.txt', 'commfile.txt')