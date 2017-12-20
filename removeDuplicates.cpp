#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums);

int main()
{
    vector<int> test1 {1,1};

    if( 1 != removeDuplicates(test1))
    {
        cout << "test 1 failed! \nElements remaining: ";
        for(int i = 0, len = test1.size(); i < len; i++)
            cout << test1[i] << ", ";

        cout << endl; 
    }
    else cout << "Test 1 Passed!" << endl;


    vector<int> test2 { 1, 1, 2, 1 };

    if( 2 != removeDuplicates(test2) )
    {
        cout << "test 2 failed! \nElements remaining: ";
        for(int i = 0, len = test2.size(); i < len; i++)
            cout << test2[i] << ", ";

        cout << endl;
    }
    else cout << "Test 2 Passed!" << endl;
}
int removeDuplicates(vector<int>& nums) {
        
    int i, x = 0;
     
    for( ; i < nums.size() - 1; i++ )
    {
        x = i + 1;

        while( x < nums.size() )
        {
            if(nums[i] == nums[x])
            {
                 nums.erase(nums.begin() + x );
                 cout << "eRASED " << x;
            }   
            else
                x++;
        }
    }
        
        return nums.size();
}
