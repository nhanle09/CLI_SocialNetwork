#ifndef USER_H
#define USER_H

#include <iostream>
#include <boost/uuid/uuid.hpp>          
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>  
#include <boost/lexical_cast.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <vector>
#include <map>


class User {

    public:
        User();
        int get_age();
        int get_interest_count();
        std::string get_fname();
        std::string get_interest(int index);
        std::string get_lname();
        std::string get_uuid();
        void add_interest(std::string interest);
        void clear_interest();
        void set_age(int age);
        void set_fname(std::string fname);
        void set_lname(std::string lname);        
        void set_uuid(boost::uuids::uuid uuid);

    private:
        boost::uuids::uuid _uuid;
        std::string _fname;
        std::string _lname;
        int _age;
        int _serial_number = 1;
        std::vector<std::string> _interests;
};

#endif