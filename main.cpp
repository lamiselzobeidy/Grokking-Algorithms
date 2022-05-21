#include <iostream>
using namespace std;

void binary_search (int searchNumber, int sortedArray[]) {
int low = 0;
int mid;
size_t high = sizeof(sortedArray)/sizeof(sortedArray[0]);
while(low<=high)
{
    mid = (low + high)/2;
    if (sortedArray[mid] == searchNumber)
    {
        cout << "found the number searched for: " << sortedArray[mid] << endl;
        break;
    }
    else if(searchNumber < sortedArray[mid])
    {
        high = mid;
    }
    else
    {
        low = mid;
    }
}
}
int main()
{
    int myNum = 20;
    int myArray[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    binary_search (myNum, myArray);
    return 0;
}
