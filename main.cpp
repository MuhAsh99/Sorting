#include <iostream>
#include <chrono>
#include "include/sorting_library.h"



int main() {




    int arr[] = {100, 1000, 5000, 10000, 100000, 150000, 300000};


    //SORTED DATA SETS
    //when testing the different sorts, I would uncomment this section and
    //test each mystery sort and then plot the times for each of the datasets

    for (int i = 0; i < 7; i++) {
        //arr[i] = i;
        int data[arr[i]];

        std::cout<<"testing size of: "<<arr[i]<<std::endl;
        std::cout << std::fixed << std::showpoint;
        std::cout.precision(9);
        //print_version_number();
        //create a start and end time_point object
        std::chrono::time_point<std::chrono::high_resolution_clock> start, end;

        //get the current time, run the algo, then get the current time again
        start = std::chrono::high_resolution_clock::now();
        mystery01(data, arr[i]);
5;
        end = std::chrono::high_resolution_clock::now();

        //calculate the duration between start and end and print to the terminal
        std::chrono::duration<double> time_in_seconds = end - start;
        std::cout << std::fixed << "Duration: " << time_in_seconds.count() << std::endl;
    }
;

//    reversing dataset
//    when testing the different sorts, I would uncomment this section and
//    test each mystery sort and then plot the times for each of the datasets

//    for(int i = 0; i < 7; i++){
//        int data[arr[i]];
//        int x = 0;
//        int reverse[arr[i]];
//        for(int k = arr[i]; k >= 0; k--){
//            reverse[x] = k;
//            x++;
//        }
//        reverse[arr[i] - 1] = 100;
//
//        std::cout<<"testing size of: "<<arr[i]<<std::endl;
//        std::cout << std::fixed << std::showpoint;
//        std::cout.precision(9);
//        //print_version_number();
//        //create a start and end time_point object
//        std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
//
//        //get the current time, run the algo, then get the current time again
//        start = std::chrono::high_resolution_clock::now();
//        mystery01(data, arr[i]);
//        5;
//        end = std::chrono::high_resolution_clock::now();
//
//        //calculate the duration between start and end and print to the terminal
//        std::chrono::duration<double> time_in_seconds = end - start;
//        std::cout << std::fixed << "Duration: " << time_in_seconds.count() << std::endl;
//
//    }

    //RANDOM SET
    //when testing the different sorts, I would uncomment this section and
    //test each mystery sort and then plot the times for each of the datasets
//
//    for(int i = 0; i < 7; i++){
//        int data[arr[i]];
//        for(int k = 0; k <= arr[i]-1; k++){
//            data[k] = k;
//        }
//        for(int k = 0; k <= arr[i]-1; k++){
//            int change = rand() % arr[i];
//            int temp = data[k];
//            data[k] = data[change];
//            data[change] = temp;
//        }
//
//        std::cout<<"testing size of: "<<arr[i]<<std::endl;
//        std::cout << std::fixed << std::showpoint;
//        std::cout.precision(9);
//        //print_version_number();
//        //create a start and end time_point object
//        std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
//
//        //get the current time, run the algo, then get the current time again
//        start = std::chrono::high_resolution_clock::now();
//        mystery04(data, arr[i]);
//        5;
//        end = std::chrono::high_resolution_clock::now();
//
//        //calculate the duration between start and end and print to the terminal
//        std::chrono::duration<double> time_in_seconds = end - start;
//        std::cout << std::fixed << "Duration: " << time_in_seconds.count() << std::endl;
//
//    }


////

    return 0;
}

//for mystery02
//  - test smaller datasets
//  - check timing
//  - graph in excel
//  - look up best and worst case scenarios for each type of sort


