#include <iostream>
#include <string>
#include <vector>
#include <climits>

using std::cout;
using std::swap;

enum Letters {A, B, C, D};

void partition_boolVec(std::vector<bool>& boolVec){
    int trail = 0; 
    int lead  = boolVec.size() - 1;
    while (trail <= lead){
        if(boolVec[trail])
            trail++;
        else
            swap(boolVec[trail], boolVec[lead--]);
    }
    return;
}

//TEST
int main()
{
    std::vector<bool> test1 {true, false, true, false, true, true, false, true, false, };
    partition_boolVec(test1);
    for(auto i : test1)
        cout << ( i ? "true " : "false " );
}