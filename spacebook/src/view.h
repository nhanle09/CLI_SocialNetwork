#ifndef VIEW_H
#define VIEW_H

#include <unistd.h>

#include "user.h"
#include "post.h"
#include "ops.h"


class View 
{
    public:
        View();
        View(User &user, std::map<int, Post>& posts) : _user(user), _posts(posts) {}

        void list_users(std::map<std::string, TSN::user_information>::iterator i);
        void post_user();
        void print_banner();
        void print_return_progress();        
        void print_separator();
        void print_user_headers();
        void show_about();
        void show_menu();
        void show_owner_info();
        void show_post_menu();
        void show_post();
        void show_user_info(std::map<std::string, TSN::user_information>::iterator i);

    private:
        User& _user;
        std::map<int, Post>& _posts;
};

#endif