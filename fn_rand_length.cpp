#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

// 깃허브 AI 가 정리한 코드 ㅇ_ㅇ;;

// Generate random data with balanced distribution across 8 values
// Returns the count of generated values
int fn_rand_length()
{
    unsigned char vv[10];
    char order[10];
    int counts[8] = {0};  // Counter for each value (0-7)
    
    memset(order, 0x00, 10);
    memset(vv, 0x00, 10);
    
    int index = 0;
    
    // Generate until all 8 values are generated at least once
    while (index < 8)
    {
        int random_val = rand() % 8;
        
        // If this value hasn't been generated yet
        if (counts[random_val] == 0)
        {
            vv[index] = '0' + random_val;
            order[index] = '0' + random_val;
            counts[random_val]++;
            index++;
        }
    }
    
    return index;  // Return count (always 8)
}

int main(int argc, char** argv)
{
    srand((unsigned int)time(NULL));
    
    // Test fn_rand_length()
    unsigned char rand_data[10];
    
    for (int i = 0; i < 10; i++)
    {
        int len = fn_rand_length();
        cout << "Generated " << len << " random values" << endl;
    }
    
    return 0;
}
