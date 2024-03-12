#ifndef EMAIL_H
#define EMAIL_H

#include <string>
#include <future>
#include <cstdlib>
#include"user.h"

void verifyMail(const std::string& receiver_email, const std::string& receiver_username, const std::string& code) {
    std::string sender_email = "kiddoquest.se@gmail.com";
    std::string sender_password = "rclc yhio vkbs gmsc";
    std::string subject = "Verify Email";
    std::string message = "Please enter the following code to verify your email: " + code;
    std::string command = "python3 C:/n/year1/cpp/pj/KiddoQuest-main/welcome.py \"" + sender_email + "\" \"" + sender_password + "\" \"" + receiver_email + "\" \"" + subject + "\" \"" + message + "\"";

    std::future<int> result = std::async(std::launch::async, [command]() {
        return std::system(command.c_str());
    });
}

void passwordMail(const User& user) {
    std::string sender_email = "kiddoquest.se@gmail.com";
    std::string sender_password = "rclc yhio vkbs gmsc";
    std::string subject = "Recover Password";
    std::string message = "Your current password: " + user.getPassword();
    std::string command = "python3 C:/n/year1/cpp/pj/KiddoQuest-main/welcome.py \"" + sender_email + "\" \"" + sender_password + "\" \"" + user.getEmail() + "\" \"" + subject + "\" \"" + message + "\"";

    std::future<int> result = std::async(std::launch::async, [command]() {
        return std::system(command.c_str());
    });
}

#endif // EMAIL_H
