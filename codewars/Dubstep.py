# https://www.codewars.com/kata/551dc350bf4e526099000ae5

def song_decoder(fname):
    s = []
    new = fname.split("WUB")

    for i in new:
        if i =="":
            continue
        else:
            s.append(i)

    name = " ".join(str(i) for i in s)
    return name
