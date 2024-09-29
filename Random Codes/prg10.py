# WAP to extract all the content from a file using readline
# File name is mbox-short.txt

f = open('prg10.txt', 'r')
while True:
    line = f.readline()
    if not line:
        break
    print(line)
