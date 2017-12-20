/* Given a string containing just the characters '(', ')', '{', '}', '[' and 
 * ']', determine if the input string is valid.
 * 
 * The brackets must close in the correct order, "()" and "()[]{}" are all valid 
 * but "(]" and "([)]" are not.
 */

#include <stack>

using namespace std; 

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stk;

        stk.push('\0');
        
        for( int i = 0, len = s.size(); i < len; i++)
        {
            switch(s[i])
            {
                case '(':
                case '{':
                case '[':
                    stk.push(s[i]);
                    break;
                case ')':
                    if (stk.top() == '(')
                    {
                        stk.pop();
                        break;
                    }
                    return false;
                case '}':
                    if (stk.top() == '{')
                    {
                        stk.pop();
                        break;
                    }
                    return false;
                case ']':
                    if (stk.top() == '[')
                    {
                        stk.pop();
                        break;
                    }
                    return false;
                default:
                    break;
            }
        }
        
        stk.pop();
        
        return stk.empty();
    }
};
