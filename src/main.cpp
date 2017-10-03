#include <iostream>
#include <fstream>
#include <stdlib.h>
 #include <stdio.h>
#include "RandomBase.hpp"
#include "StringSample.hpp"

using namespace std;

int main()
{
    RandomBase rng;
    cout << rng.GetRandomUInt32() << endl;
    cout << ( ( rng.GetYesOrNo() ) ? "true" : "false" ) << endl;
    cout << rng.GetRandomIntPos() << endl;
    cout << rng.GetRandomCharacter() << endl;
    cout << rng.GetRandomCharacterUpper() << endl;
    cout << rng.GetRandomCharacterLower() << endl;
    
    StringSample strSample;
    cout << "Random String: " << strSample.GetRandomString(  ) << endl;
    cout << "Random String: " << strSample.GetRandomStringUpper(  ) << endl;
    cout << "Random String: " << strSample.GetRandomStringLower(  ) << endl;
    
    
     
    unsigned int t = 0;
    unsigned char bytes[4] = {2, 3, 4, 5};
    t = ( t << 8 ) + bytes[0];
    t = ( t << 8 ) + bytes[1];
    t = ( t << 8 ) + bytes[2];
    t = ( t << 8 ) + bytes[3];
       
    cout << t << endl;
    return 0;
}