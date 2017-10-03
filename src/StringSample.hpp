#ifndef _STRINGSAMPLE_HPP
#define _STRINGSAMPLE_HPP

#include <string>
#include <vector>

#include "RandomBase.hpp"

using namespace std;

namespace StringSettings
{
    const size_t MAX_STR_LENGTH = 30;
    const size_t MIN_STR_LENGTH = 0;
}


class StringSample : RandomBase
{
public:
   
    /* 
        Returns a random string with a random length between
        MIN_STR_LENGTH and MAX_STR_LENGTH with length is 0.        
    */
  
    string GetRandomString( size_t length = 0 )
    {
        size_t limit = StringSettings::MAX_STR_LENGTH;
        string str = "";
        length = ( length == 0 ) ? GetRandomSize() % limit : length;
        
        while( str.length() < length )
        {
            str += GetRandomCharacter();
        }        
        
        return str;
    }
    
    string  GetRandomStringUpper( size_t length = 0 )
    {
        size_t limit = StringSettings::MAX_STR_LENGTH;
        string str = "";
        length = ( length == 0 ) ? GetRandomSize() % limit : length;
        
        while( str.length() < length )
        {
            str += GetRandomCharacterUpper();
        }   
        
        return str;
    }
    
    string  GetRandomStringLower( size_t length = 0 )
    {
        size_t limit = StringSettings::MAX_STR_LENGTH;
        string str = "";
        length = ( length == 0 ) ? GetRandomSize() % limit : length;
        
        
        while( str.length() < length )
        {
            str += GetRandomCharacterLower();
        }  
        
        return str;      
    }    
    
    
    /* 
        Returns a vector with random strings each with a 
        random length between MIN_STR_LENGTH and
        MAX_STR_LENGTH with length.
         
        Param: (*rngStrFunc) 
        Pass the function you want to use.
        
        Example: GetRandStrVector( 0, GetRandomStringUpper)
                
    */
    vector<string> GetRandomStringUpperVector( size_t count )
    {
        vector<string> strVector;
        
        for( size_t i = 0; i < count; i++ )
        {
            strVector.push_back( GetRandomStringUpper() );
        }
        
        return strVector;
    }
    
    vector<string> GetRandomStringLowerVector( size_t count )
    {
        vector<string> strVector;
        
        for( size_t i = 0; i < count; i++ )
        {
            strVector.push_back( GetRandomStringLower() );
        }
        
        return strVector;
    }
    
    vector<string> GetRandomStringVector( size_t count )
    {
        vector<string> strVector;
        
        for( size_t i = 0; i < count; i++ )
        {
            strVector.push_back( GetRandomString() );
        }
        
        return strVector;
    }
    
    
    
};

#endif