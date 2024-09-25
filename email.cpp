#include "email.h"
#include <cstdlib>
#include <future>
#include <string>

void verifyMail(const std::string& receiver_email, const std::string& receiver_username, const std::string& code) {
    std::string sender_email = "kiddoquest.se@gmail.com";
    std::string sender_password = "rclc yhio vkbs gmsc";
    std::string subject = "Verify Email";
    std::string message = "Please enter the following code to verify your email: " + code;
    std::string command = "python C:/n/year1/sem1/Python/sendmail/welcome.py \"" + sender_email + "\" \"" + sender_password + "\" \"" + receiver_email + "\" \"" + subject + "\" \"" + message + "\"";

    std::future<int> result = std::async(std::launch::async, [command]() {
        return std::system(command.c_str());
    });
}
