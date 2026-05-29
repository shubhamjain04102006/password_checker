# Password Strength Checker

A console-based C++ tool that evaluates the strength of a password based on multiple security criteria and gives suggestions to improve it.

## Features

- Checks password length
- Detects uppercase and lowercase letters
- Detects digits and special characters
- Gives a strength score: **Weak / Medium / Strong**
- Provides suggestions to improve weak passwords
- Option to check multiple passwords in one run

## How to Compile and Run

Make sure you have G++ installed.

```bash
g++ password_checker.cpp -o password_checker
./password_checker
```

## Sample Output

```
=== Password Strength Checker ===

Enter your password: hello

--- Feedback ---
[-] Password is too short. Use at least 8 characters.
[-] Add uppercase letters (A-Z).
[-] Add at least one number (0-9).
[-] Add special characters like @, #, $, !, etc.

Password Strength: Weak
Consider improving your password using the suggestions above.

Check another password? (y/n): y

Enter your password: Hello@1234

--- Feedback ---

Password Strength: Strong
Great! Your password is strong.

Check another password? (y/n): n

Goodbye! Stay safe online.
```

## Strength Criteria

| Criteria | Points |
|----------|--------|
| Length >= 8 | +1 |
| Length >= 12 | +1 |
| Has uppercase letter | +1 |
| Has lowercase letter | +1 |
| Has digit | +1 |
| Has special character | +1 |

- Score 0-2 → **Weak**
- Score 3-4 → **Medium**
- Score 5-6 → **Strong**

## Concepts Used

- C++ OOP (Class and Object)
- String manipulation
- Loops and conditionals
- Cybersecurity awareness

## Author
Shubham jain

Made by Shubham Jain

