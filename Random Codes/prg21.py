# Use file mbox.txt

# Q1) Wap to read through a file and print the contents of the file (line by line) all in upper case

file_path = "prg10.txt"
with open(file_path, 'r') as file:
    for line in file:
        print(line.upper(), end='')
