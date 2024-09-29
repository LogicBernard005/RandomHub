# Program to implement Brute Force Attack

import itertools

def brute_force_attack(username, password_length, possible_characters):
    for length in range(1, password_length + 1):
        for attempt in itertools.product(possible_characters, repeat=length):
            password = ''.join(attempt)
            if login(username, password):
                print(f"Brute force attack successful! Username: {username}, Password: {password}")
                return True
    print("Brute force attack unsuccessful.")
    return False

def login(username, password):
    # Hypothetical login function - replace with actual login mechanism
    valid_username = "Akshat005"
    valid_password = "~s2me"
    print(f"Username: {username}, Password: {password}")
    if username == valid_username and password == valid_password:
        return True
    else:
        return False

if __name__ == "__main__":
    username = input("Enter the username: ")
    password_length = int(input("Enter the maximum length of the password: "))
    possible_characters = input("Enter the possible characters for the password: ")

    brute_force_attack(username, password_length, possible_characters)
