# Wap in python that accepts two integers a and b(a is greater than b) and returns a list that contains all the odd
# numbers between a and b including a and b in descending order


def func(a, b):
    if a <= b:
        return []
    odd_numbers = []
    for number in range(a, b - 1, -1):
        if number % 2 != 0:
            odd_numbers.append(number)
    return odd_numbers
a = int(input("Enter a: "))
b = int(input("Enter b: "))
if a > b:
    result = func(a, b)
    print("Odds between {} and {} in DSC order:".format(a, b))
    print(result)
else:
    print("Invalid I/P")
