str1 = input("Enter Secret Code: ")
str2 = str1.split(" ")
str3 = []
j = 0
str4 = " "
for word in str2:
    if (len(word) > 2):
        str3.append(word[3:-3][::-1])
    else:
        str3.append(word[::-1])
print(str4.join(str3))
