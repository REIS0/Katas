# https://www.codewars.com/kata/letterbox-paint-squad/train/python

def paint_letterboxes(start, finish):
    array = []
    for i in range(10):
        n = start
        count = 0
        j = str(i)
        while True:
            m = str(n)
            if n > finish:
                break
            elif j in m:
                count += m.count(j)
            n += 1
        array.append(count)
    return array
