#include <iostream>
#include <string>
using namespace std;

// Function to check password strength
string checkStrength(string password) {
    int score = 0;
    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    int len = password.length();

    // Check length
    if (len >= 8)
        score++;
    if (len >= 12)
        score++;

    // Check characters
    for (int i = 0; i < len; i++) {
        char c = password[i];

        if (c >= 'A' && c <= 'Z')
            hasUpper = true;
        else if (c >= 'a' && c <= 'z')
            hasLower = true;
        else if (c >= '0' && c <= '9')
            hasDigit = true;
        else
            hasSpecial = true;
    }

    if (hasUpper) score++;
    if (hasLower) score++;
    if (hasDigit) score++;
    if (hasSpecial) score++;

    // Give suggestions
    cout << "\n--- Feedback ---\n";
    if (len < 8)
        cout << "[-] Password is too short. Use at least 8 characters.\n";
    if (!hasUpper)
        cout << "[-] Add uppercase letters (A-Z).\n";
    if (!hasLower)
        cout << "[-] Add lowercase letters (a-z).\n";
    if (!hasDigit)
        cout << "[-] Add at least one number (0-9).\n";
    if (!hasSpecial)
        cout << "[-] Add special characters like @, #, $, !, etc.\n";

    if (score <= 2)
        return "Weak";
    else if (score <= 4)
        return "Medium";
    else
        return "Strong";
}

class PasswordChecker {
public:
    void run() {
        string password;
        char choice;

        cout << "=== Password Strength Checker ===\n";

        do {
            cout << "\nEnter your password: ";
            cin >> password;

            string result = checkStrength(password);

            cout << "\nPassword Strength: " << result << "\n";

            if (result == "Strong")
                cout << "Great! Your password is strong.\n";
            else
                cout << "Consider improving your password using the suggestions above.\n";

            cout << "\nCheck another password? (y/n): ";
            cin >> choice;

        } while (choice == 'y' || choice == 'Y');

        cout << "\nGoodbye! Stay safe online.\n";
    }
};

int main() {
    PasswordChecker checker;
    checker.run();
    return 0;
}
