# Program to check strength of a password

import re

def check_password_strength(password):
    # Check minimum length
    if len(password) < 8:
        return False, "Password must be at least 8 characters long."

    # Check for at least one uppercase letter
    if not any(char.isupper() for char in password):
        return False, "Password must contain at least one uppercase letter."

    # Check for at least one lowercase letter
    if not any(char.islower() for char in password):
        return False, "Password must contain at least one lowercase letter."

    # Check for at least one special character
    if not re.search(r"[!@#$%^&*(),.?\":{}|<>]", password):
        return False, "Password must contain at least one special character."

    # Check for at least one digit
    if not any(char.isdigit() for char in password):
        return False, "Password must contain at least one digit."

    # If all conditions are met
    return True, "Password is strong."

if __name__ == "__main__":
    password = input("Enter your password: ")
    is_strong, message = check_password_strength(password)
    print(message)
