n = 10000000

primes = [True] * (n + 1)
prime_numbers = []

primes[0] = primes[1] = False

for p in range(2, int(n**0.5) + 1):
    if primes[p]:
        for i in range(p * p, n + 1, p):
            primes[i] = False

for i in range(2, n + 1):
    if primes[i]:
        prime_numbers.append(i)

num = int(input("Enter Number:\n"))

if primes[num]:
    print("Prime Number")
else:
    print("Composite Number")
