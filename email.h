#ifndef EMAIL_H
#define EMAIL_H

#include <string>
#include <future>
#include <cstdlib>

void verifyMail(const std::string& receiver_email, const std::string& receiver_username, const std::string& code);

#endif // EMAIL_H
