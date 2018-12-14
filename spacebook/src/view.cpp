#include "view.h"

#include <boost/format.hpp>
#include <iostream>
#include <map>
#include <iomanip>
#include "util.cpp"

/* List all users in tabular format */
void View::list_users(std::map<std::string, TSN::user_information>::iterator i)
{
    std::cout << boost::format("%-40s | %-15s | %-15s | %-10d") 
        % i->first % i->second.first_name % i->second.last_name % i->second.number_of_highest_post << std::endl;
}

/* Post user  with separator */
void View::post_user()
{
    std::cout << "Owner Information Sent!" << std::endl;
    print_separator();
}

/* View The main program's banner */
void View::print_banner()
{
    std::string banner = R"(
==========================================================================================
=========================== T H E   S O C I A L   N E T W O R K ==========================
==========================================================================================)";
    std::cout << banner << std::endl;    
}

/* View the returning to menu animation */
void View::print_return_progress()
{
    std::cout << std::endl;
    std::cout << "Back to menu in [";
    for (int i = 30; i > 0; i--)
    {
        if (i % 10 == 0)
        {
            std::cout << "" << i / 10 << std::flush;
        }
        else
        {
            std::cout << "-" << std::flush;
        }
        usleep(100000);
    }
    std::cout << "0]" << std::endl;
}

/* Print separator */
void View::print_separator()
{
    for (int i = 0; i < 90; i++)
    {
        std::cout << "-";
    }
    std::cout << std::endl;
}

/* Display Table Header */
void View::print_user_headers()
{
    print_separator();
    std::cout << boost::format("%-40s | %-15s | %-15s | %-10s") 
        % "UUID" % "First Name" % "Last Name" % "Posts" << std::endl;
    print_separator();
}

void View::show_about()
{
    std::string about_str = R"(
About:

    The Social Network is created by Nhan Le, Subhechha Shreshtha, David Nguyen, and Hy Nguyen.
    This software was made for the purpose of getting an A in CSE 3310 Section 2. Any 
    unauthorized usage of this software without the consent of its creators is strictly
    prohibited and will not be charged as we cannot afford lawyers.

Help:

    1.  List all the users that are stored locally
    2.  Request a specific user information that is stored locally.
        User's UUID can be entered partially as the program will search for the partial UUID
    3.  Request specific post(s) from specific user(s)
        Make sure to enter the number of UUID to be requested and the number of posts to be
            requested per user.
        UUID can be enter partially.
    4.  New post will be stored forever and cannot be edited. If it's part of a post, UUID
        can be entered partially
    5.  This will wipe out all of the owner's information EXCEPT for posts. There will not be
        a partial edit. User will have to enter all the user's information once again
    6.  Send a private message to a specific user. There will be no confirmation from the
        user's side. UUID can be entered partially
    7.  This will send requests out to all users requesting all posts and only display posts
        with matching keyword to owner's interest
    8.  This will clear out all the local content stored in memory. Users are already online
        will be show online once again
    9.  This help page
    0. Program will exist

    Pressing " / " at any time during main menu selection or during notification will switch
    between the two modes. Should the user mis-entered any input it can be use as an
    escape key to go back to notification then switch back to edit mode. )";

    std::cout << about_str << std::endl;
}

/* Display main menu options */
void View::show_menu()
{
    std::string menu = R"(
Enter a value corresponding to the option: 
(1)  List All Users             (2)  Show Specific User          (3)  Request Post(s)
(4)  Make a New Post            (5)  Edit Owner's Info           (6)  Send Private Message
(7)  Posts of Interests         (8)  Resync                      (9)  About / Help
(/)  Switch Screen              (0)  Exit Program

Selected >> )";
    print_banner();
    show_owner_info();
    show_post();
    std::cout << menu;
}

/* Display owner's information */
void View::show_owner_info()
{
    std::cout << "UUID: \t\t" << _user.get_uuid() << std::endl;
    std::cout << "First Name: \t" << _user.get_fname(); //<< std::endl;
    std::cout << "\t\tLast Name: \t" << _user.get_lname() << std::endl;
    std::cout << "Age: \t\t" << _user.get_age();// << std::endl;
    std::cout << "\t\tPost Counts: \t" << _posts.size() << std::endl;
    std::cout << "Interest: \t";
    for (int i = 0; i < _user.get_interest_count(); i++)
    {
        std::cout << _user.get_interest(i) << ", ";
    }
    std::cout << std::endl;
}

/* Displa post option menu */
void View::show_post_menu()
{
    std::string post_menu = R"(
(1)  Stand-alone post
(2)  Post to another post

Selected >> )";

    std::cout << post_menu;
}

/* Display all owner's post */
void View::show_post()
{
    std::cout << "\nPost History:\n";
    for (std::map<int, Post>::iterator i = _posts.begin(); i != _posts.end(); i++)
    {
        std::cout << "(" << i->first << ") " 
                  << F_Utility::get_date_time(i->second.get_time());
        std::cout << "    " << i->second.get_post() << std::endl;
    }
}

/* Display a remote's user information */
void View::show_user_info(std::map<std::string, TSN::user_information>::iterator i)
{
    print_separator();
    std::cout << "UUID: \t\t" << i->first << std::endl;
    std::cout << "First Name: \t" << i->second.first_name << std::endl;
    std::cout << "Last Name: \t" << i->second.last_name << std::endl;
    std::cout << "Age: \t\t" << i->second.date_of_birth << std::endl;
    std::cout << "Interests: \t";
    for (unsigned int j = 0; j < i->second.interests.length(); j++)
    {
        std::cout << i->second.interests[j] << ", ";
    }
    std::cout << "\nPost Counts: \t" << i->second.number_of_highest_post << std::endl;
    print_separator();
}