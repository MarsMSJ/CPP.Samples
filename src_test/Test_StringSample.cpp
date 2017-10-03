#include "../src/StringSample.hpp"
#include <ctype.h>
#include "gtest/gtest.h"
#include <vector>
#include <string>

namespace{
    
    //Test function doesn't fail.
    
    const size_t SETTING_LEN = 10;
    
      
    TEST( StringSampleTest, GetRandomStringFailure ){
        StringSample StringSample_;
        string str;
        
        EXPECT_NO_THROW({            
            str = StringSample_.GetRandomString();
        });
        
        str = StringSample_.GetRandomString( SETTING_LEN );
        EXPECT_STRNE( NULL, str.c_str() );        
        ASSERT_EQ( SETTING_LEN, str.length() );
    }
    
      
    TEST( StringSampleTest, GetRandomStringUpper ){
        StringSample StringSample_;
        string str;
        
        EXPECT_NO_THROW({            
            str = StringSample_.GetRandomStringUpper();
        });
        
        str = StringSample_.GetRandomStringUpper( SETTING_LEN );
        EXPECT_STRNE( NULL, str.c_str() );        
        ASSERT_EQ( SETTING_LEN, str.length() );
        
        bool upperCharMember = false;
    
        
        for( size_t i = 0; i < SETTING_LEN; i++ )
        {
            if( islower( str[i] ) )
            {
                //Failure - Receivered a lower character in a string
                //that is suppose to be all upper characters
                upperCharMember = true;
            }
        }
        
        ASSERT_FALSE( upperCharMember );
    }
    
      TEST( StringSampleTest, GetRandomStringLower ){
        StringSample StringSample_;
        string str;
        
        EXPECT_NO_THROW({            
            str = StringSample_.GetRandomStringLower();
        });
        
        str = StringSample_.GetRandomStringLower( SETTING_LEN );
        EXPECT_STRNE( NULL, str.c_str() );        
        ASSERT_EQ( SETTING_LEN, str.length() );
        
        
        bool lowerCharMember = false;
        
        for( size_t i = 0; i < str.length(); i++ )
        {
            if( isupper( str[i] ) )
            {
                //Failure - Receivered a lower character in a string
                //that is suppose to be all upper characters
                lowerCharMember = true;
                break;
            }
        }
        
        ASSERT_FALSE( lowerCharMember );
    }
    
    TEST( StringSampleTest, GetRandomStringUpperVectorFailure ){
        StringSample StringSample_;
        size_t count = 10;
        vector<string> strVector;
        
        EXPECT_NO_THROW({            
            strVector = StringSample_.GetRandomStringUpperVector( count );
        });
         
        strVector = StringSample_.GetRandomStringUpperVector( count );        
        EXPECT_EQ( count, strVector.size() );
        
        bool lowerCharMember = false;
        
        for( auto str : strVector )
        {
            for( auto c : str )
            {
                lowerCharMember = islower( c );              
            }
            
            if( lowerCharMember )
            {
                break;
            }
        }
        
        ASSERT_FALSE( lowerCharMember );
    }
  
    TEST( StringSampleTest, GetRandomStringLowerVectorFailure ){
        StringSample StringSample_;
        size_t count = 10;
        vector<string> strVector;
        
        EXPECT_NO_THROW({            
            strVector = StringSample_.GetRandomStringLowerVector( count );
        });
         
        strVector = StringSample_.GetRandomStringLowerVector( count );        
        EXPECT_EQ( count, strVector.size() );
        
        bool upperCharMember = false;
        
        for( auto str : strVector )
        {
            for( auto c : str )
            {
                upperCharMember = isupper( c );              
            }
            
            if( upperCharMember )
            {
                break;
            }
        }
        
        ASSERT_FALSE( upperCharMember );
    }
    
    
    TEST( StringSampleTest, GetRandomStringVectorFailure ){
        StringSample StringSample_;
        size_t count = 10;
        vector<string> strVector;
        
        EXPECT_NO_THROW({            
            strVector = StringSample_.GetRandomStringVector( count );
        });
         
        strVector = StringSample_.GetRandomStringVector( count );        
        EXPECT_EQ( count, strVector.size() );
    }
    
}

