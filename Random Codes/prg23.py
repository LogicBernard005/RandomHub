# WAP in python to prompt for a file name, and then read through the file and look for lines of the form

# file_name = "prg10.txt"

# X-DSPAM_Confidence:0.8475
# pattern = "X-DSPAM_Confidence:0.8475"


pattern = "m03LYdY1029538"

with open("prg10.txt", "r") as file:
    line_number = 1
    for line in file:
        if pattern in line:
            print(f"Found in line {line_number}")
        line_number += 1

file.close()


