#include <vector>
using namespace std;

vector<int> use_array() {
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //-----WRITE YOUR CODE BELOW THIS LINE----
    
    int arr[10] {};
    arr[0] = 100;
    arr[9] = 1000;
    
    //-----WRITE YOUR ABOVE THIS LINE----
    //-----DO NOT MODIFY THE CODE BELOW THIS LINE----
    std::vector<int> v(arr, arr + sizeof arr / sizeof arr[0]);
    return v;
}
