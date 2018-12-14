#ifndef UTIL_H
#define UTIL_H


#include <iostream>
#include <string.h>
#include <time.h>

namespace F_Utility
{
    /* Check substring as part of string */
    inline bool check_keyword(std::string sentence , std::string key)
    {
	    size_t found = sentence.find(key);
		if (found != std::string::npos)
		{
			return true;
		} 
		else
		{
			return false;
		}	
    }    

    /* Return readable date and time from raw time */
    inline std::string get_date_time( time_t raw_time )
    {
        //time (&raw_time);
        return ctime(&raw_time);
    }

    /* Generate and get raw time */
    inline time_t get_raw_time()
    {
        struct timespec t;
        clock_gettime ( CLOCK_REALTIME, &t );
        return t.tv_sec; 
    }

    /* Prep UUID in char form to be send out */
    inline void prep_uuid(char* char_uuid, std::string string_uuid)
    {
        memcpy(char_uuid, string_uuid.c_str(), 37);
        char_uuid[36] = '\0';
    }
}

#endif