#!/usr/bin/python
# -*- coding: UTF-8 -*-
import jieba
#txt = open("./books/1.txt","r",encoding='utf-8').read()
txt = open("./books/5.txt","r").read()
words = jieba.lcut(txt)
counts = {}

for word in words:
    if len(word) ==1:
        continue
    else:
        counts[word] = counts.get(word,0)+1

    items = list(counts.items())
    items.sort(key=lambda x:x[1], reverse = True)
print(items)
#    for i in range(15):
#        word,count = items[i]
#        print("{0:<5}{1:>5}".format(word,count))

