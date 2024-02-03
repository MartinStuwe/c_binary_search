// Author: Martin Stuwe
// EMail: MartinStuwe@ProtonMail.com
// Iterative binary search for lists

#include <stdio.h>

// Prototyping for binarySearch
int binarySearch(int *list, int size, int searchValue);

int main(void)
{
    int intList[5] = {1, 2, 3, 4, 5};
    int index;
    index = binarySearch(intList, 5, 2);
    printf("%d\n", index);
}

int binarySearch(int *list, int size, int searchValue)
{
    int low = 0;
    int high = size - 1;
    int mid;
    while(low < high)
    {
        mid = low + (high - low) / 2;
        // If searched value found in middle, return middle index 
        if(list[mid] == searchValue){
            return mid;
        }
        // If middle list element less than searched Value,
        // search in upper partition
        if(list[mid] < searchValue){
            low = mid + 1;
        }
        // Otherwise element has to be in lower half,
        // change boundary index high to search in lower partition
        else{
            high = mid - 1;
        }
    }
}