#include "user.h"

/* Constructor */
User::User()
{
}

/* return user's age */
int User::get_age()
{
    return _age;
}

/* Return all interests */
int User::get_interest_count()
{
    return _interests.size();
}

/* Return first name */
std::string User::get_fname()
{
    return _fname;
}

/* Return specific interest */
std::string User::get_interest(int index)
{
    assert(index >= 0);
    return _interests.at(index);
}

/* Return last name */
std::string User::get_lname()
{
    return _lname;
}

/* Return UUID */
std::string User::get_uuid()
{
    return boost::uuids::to_string(_uuid);
}

/* Add interest */
void User::add_interest(std::string interest)
{
    _interests.push_back(interest);
}

/* Clear all interests */
void User::clear_interest()
{
    _interests.clear();
}

/* Set user's age */
void User::set_age(int age)
{
    _age = age;
    assert( _age == age);
}

/* Set user's first name */
void User::set_fname(std::string fname)
{
    _fname = fname;
}

/* Set user's last name */
void User::set_lname(std::string lname)
{
    _lname = lname;
}

/* Set user's uuid. Only for importing from user file */
void User::set_uuid(boost::uuids::uuid uuid)
{
    _uuid = uuid;
}