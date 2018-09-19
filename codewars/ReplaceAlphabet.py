# https://www.codewars.com/kata/546f922b54af40e1e90001da

import string
def alphabet_position(text):
    list = []
    text = text.lower()
    for i in text:
        if i.isalpha() == True:
            list.append(string.ascii_lowercase.index(i) + 1)
        else:
            continue
    return " ".join(str(e) for e in list)
