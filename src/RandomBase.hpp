#ifndef _RANDOMBASE_HPP
#define _RANDOMBASE_HPP

#include <iostream>
#include <random> 
#include <chrono>

using namespace std;


class RandomBase{
    
public:
    
   
    
    unsigned int GetRandomUInt32(){ 
        
        #ifdef __APPLE__
            return arc4random();
        #else
            auto seed = chrono::high_resolution_clock::now().time_since_epoch().count();
            mt19937 rng(seed);
            return rng();
        #endif
    }
    
    size_t GetRandomSize()
    {
          return (size_t) GetRandomUInt32();
    }
    
    bool GetYesOrNo(){ //Random True or False
        return ( GetRandomUInt32() % 10 + 1 ) % 2 == 0;
    }
    
    int GetRandomIntPos(){ // Positive Int
        return GetRandomUInt32() % INT32_MAX;
    }
    
    int GetRandomInt(){  //  May return negative
        return (int) GetRandomUInt32();
    }
    
    vector<unsigned int> GetUIntSequence( size_t count ){ //Get UInt Sequence
        vector<unsigned int> uIntVector;
        
        for( size_t i = 0; i < count; i++ )
        {
            uIntVector.push_back( GetRandomUInt32() );
        }
        
        return uIntVector;
    }
    
    vector<int> GetIntSequence( size_t count ){ //Get int sequence, may have negative
      vector<int> uIntVector;
        
        for( size_t i = 0; i < count; i++ )
        {
            uIntVector.push_back( GetRandomInt() );
        }
        
        return uIntVector;    
    }
    
    char GetRandomCharacter(){ // May be upper or lower 
        
        return ( GetYesOrNo() ) ? GetRandomCharacterUpper() :
            GetRandomCharacterLower();
        }
        
    char GetRandomCharacterUpper(){ // Random upper char 
        return (char) ( GetRandomUInt32() % 25 + 65 );
    }
    char GetRandomCharacterLower(){ // Random lower char
        return (char) ( GetRandomUInt32() % 25 + 97 );
    }
     
    
private:
    

    
};
    

#endif