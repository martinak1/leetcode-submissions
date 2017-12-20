/* Given a 32-bit signed integer, reverse digits of an integer.
 *
 * Ex: 
 *  Input: 123
 *  Output: 321
 *
 * Return the converted int or 0 if there is an overflow
 */

#include <string>
#include <iostream>

using namespace std; 

class Solution {
public:
    int reverse(int x) {
      
        string converted = to_string(x);
        string temp;
        int sign = (x > 0) ? 1 : -1; 
        
        for( int i = converted.length() - 1; i >= 0; i--)
        {
            temp += converted[i];
        }
        
        converted = temp;
        
        try
        {
            return stoi(converted) * sign;    
        }
        catch( exception& e)
        {
            return 0; 
        }
        
        return 0; 
        
    }
};
