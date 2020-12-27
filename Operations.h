
#include "leftShift.h"
#include "leftRotate.h"
#include "rightShift.h"
#include "rightRotate.h"

void Operations()
{
    int choice;

    std::cout << "\nYou can perform following operations: \n\t1. Original Array\n\t2. Left Shift\n\t3. Left Rotate\n\t2. Right Shift\n\t3. Right Rotate";

    do {

        int A[] = {6, 3, 8, 5, 9};
        int n = 5;

        std::cout << "\nEnter the choice you want to perform: ";
        std::cin >> choice;

        switch (choice) {

            case 1:
                //Original array
                std::cout << "Original Array is: ";
                for(int i = 0; i < n; i++)
                    std::cout << A[i] << " ";
                break;

            case 2:
                // Left shift
                std::cout << "After LEFT SHIFT array is: ";
                leftshift(A, n);
                break;

            case 3:
                // Left Rotate
                std::cout << "After LEFT Rotate array is: ";
                leftRotate(A, n);
                break;

            case 4:
                // Right Shift
                std::cout << "After Right Shift array is: ";
                rightShift(A, n);
                break;

            case 5:
                // Right Rotate
                std::cout << "After Right Rotate array is: ";
                rightRotate(A, n);
                break;
        }
    }while(choice <= 5 && choice > 0);
}