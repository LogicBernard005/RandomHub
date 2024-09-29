a = int(input("Enter the value butween 5 and 9: "))


if (a < 5 or a > 9):
    raise ValueError("The number should be between 5 and 9")
elif (str(a) is "quit"):
    print("ohk")
