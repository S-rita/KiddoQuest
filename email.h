#ifndef EMAIL_H
#define EMAIL_H

#include <string>
#include "user.h"

void verifyMail(const std::string& receiver_email, const std::string& receiver_username, const std::string& code);

void passwordMail(const User& user);

#endif // EMAIL_H
