// this program is written to find the unique number in a vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myVector = {1, 3, 4, 6, 3, 3, 2, 2, 4};
    for (int i = 0; i < myVector.size(); i++)
    {
        bool isUnique = true;
        for (int j = 0; j < myVector.size(); j++)
        {
            if (i != j && myVector.at(i) == myVector.at(j))
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            cout << "The unique number in the vector is: " << myVector.at(i) << endl;
            // break;
        }
    }

    return 0;
}