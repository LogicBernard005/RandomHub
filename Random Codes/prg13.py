import os
path = "D:\clutter prg2"
ori_dir = os.listdir(path)
print("Original File Names:-")
print()
for n, i in enumerate(ori_dir):
    print(n+1, "-->",  i)
    # source = path + i
    # destination = "new" + str(n+1) + ".pdf"
    # os.rename(i, destination)

for n, i in enumerate(ori_dir):
    # print(n+1, "-->",  i)
    source = "D:\clutter prg2" + i
    destination = "new" + str(n+1) + ".pdf"
    newDestination = "D:\clutter prg2" + destination
    os.rename(source, newDestination)

    # source = path + i
#     destination = path + str(n+1) + ".pdf"
#     os.rename(i, destination)
# res_dir = os.listdir("D:\clutter prg2")
# print("New Renamed files are:- ")
# for n, i in enumerate(res_dir):
#     print(n+1, "-->",  i)
