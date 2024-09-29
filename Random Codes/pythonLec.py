# Pickle is a process of converting a python object into a byte screen to store in file or database


import pickle
f1 = open("file1.pkl", "wb")
list1 = [10, 20, 30, 'abc']
pickle.dump(list1, f1)
f1.close()
f1 = open("file2.pkl", "rb")
display = pickle.load(f1)
print(display)
