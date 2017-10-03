#include "../src/RandomBase.hpp"
#include <ctype.h>
#include "gtest/gtest.h"
#include <vector>

namespace{
    
    //Test function doesn't fail.
    
    TEST( RandomBaseTest, GetRandomSizeFailure ){
        RandomBase randomBase;
        
        EXPECT_NO_THROW({
            
            size_t result = randomBase.GetRandomSize();
        });
    }
    
    TEST( RandomBaseTest, GetRandomUInt32Failure ){
        RandomBase randomBase;
        
        EXPECT_NO_THROW({
            unsigned int result = randomBase.GetRandomUInt32();
        });
    }
    
    TEST( RandomBaseTest, GetYesOrNoFailure ){
        RandomBase randomBase;
        
        EXPECT_NO_THROW({            
            auto result = randomBase.GetYesOrNo();
        });
    }
    
    TEST( RandomBaseTest, GetRandomIntPosFailure ){
        RandomBase randomBase;
        
        EXPECT_NO_THROW({            
            auto result = randomBase.GetRandomIntPos();
        });
        
         EXPECT_TRUE( randomBase.GetRandomIntPos() >= 0 );
    }
    
    TEST( RandomBaseTest, GetRandomIntFailure ){
        EXPECT_NO_THROW({
            RandomBase randomBase;
            auto result = randomBase.GetRandomInt();
        });
    }
        
    TEST( RandomBaseTest, GetUIntSequenceFailure ){
        RandomBase randomBase;
        size_t count = 10;
        
        EXPECT_NO_THROW({
            auto sequence = randomBase.GetUIntSequence( count );
        });
        
        EXPECT_EQ( count, ( randomBase.GetUIntSequence( count ) ).size() );
    }
        
    TEST( RandomBaseTest, GetIntSequenceFailure ){
        RandomBase randomBase;
        size_t count = 10;
        
        EXPECT_NO_THROW({            
            auto result = randomBase.GetIntSequence( count );
        });
        
        EXPECT_EQ( count, ( randomBase.GetIntSequence( count ) ).size() );
    }
        
    TEST( RandomBaseTest, GetRandomCharacterFailure ){
        RandomBase randomBase;
        
        EXPECT_NO_THROW({            
            auto result = randomBase.GetRandomCharacter();
        });
        
        EXPECT_TRUE( isalpha( randomBase.GetRandomCharacter() ) );
        
    }
    
    TEST( RandomBaseTest, GetRandomCharacterUpperFailure ){
        RandomBase randomBase;
        char c;
        
        EXPECT_NO_THROW({
            c = randomBase.GetRandomCharacterUpper();
        });
       
       EXPECT_TRUE( isalpha( c ) && isupper( c ) );
    }
    
    TEST( RandomBaseTest, GetRandomCharacterLowerFailure ){
        RandomBase randomBase;
        char c;
        
        EXPECT_NO_THROW({
            c = randomBase.GetRandomCharacterLower();
        });
       
        EXPECT_TRUE( isalpha( c ) && islower( c ) );
    }
    
}

