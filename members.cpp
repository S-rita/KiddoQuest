#include "members.h"

Members::Members() {}

bool Members::foundEmail(const string& inputEmail) const {
    for (const User& user : users) {
        if (user.getEmail() == inputEmail) {
            return true; // Email found
        }
    }
    return false; // Email not found
}

bool Members::foundUsername(const string& inputName) const {
    for (const User& user : users) {
        if (user.getUsername() == inputName) {
            return true; // Username found
        }
    }
    return false; // Username not found
}

bool Members::foundPassword(const string& inputPassword) const {
    for (const User& user : users) {
        if (user.getPassword() == inputPassword) {
            return true; // Password found
        }
    }
    return false; // Password not found
}
