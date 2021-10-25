#include <iostream>

using namespace std;

// TODO: Write a void function SelectionSortDescendTrace() that takes
//       an integer array and the number of elements in the array as arguments,
//       and sorts the array into descending order.
void SelectionSortDescendTrace(int numbers [], int numElements)
{
    for (int i = 0; i < numElements - 1; i++) {
        if(numbers[i] > 0) {
        int maxElementIndex = i;
        for (int j = i + 1; j < numElements; j++) {
            if (numbers[maxElementIndex] < numbers[j]) {
                maxElementIndex = j;
            }
        }
            int temp = numbers[i];
            numbers[i] = numbers[maxElementIndex];
            numbers[maxElementIndex] = temp;
            
            // STUCK HERE
            for (int f = 0; f < numElements; f++) {
               cout << numbers[f] << " ";
               }
            cout << endl;
            }
    }
}
   
int main(int argc, char* argv[]) {  
    int input, i = 0;
    int numElements = 0;
    int numbers [10];

   // TODO: Read in a list of up to 10 positive integers; stop when
   //       -1 is read. Then call SelectionSortDescendTrace() function.    
    do{
        cin >> input;
        if(input != -1){
           numbers[i] = input;
           i++;
           numElements++;
        }
        
        }while(input != -1);
           SelectionSortDescendTrace(numbers, numElements);

    return 0;
}  
