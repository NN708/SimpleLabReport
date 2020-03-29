#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand((unsigned)time(NULL)); // use current time as seed
    cout << "Result: " << rand() % 4 + 1 << endl;
    return 0;
}