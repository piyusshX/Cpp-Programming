#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[5] = {3,5,4,2,1};
    int n = 5;
    // // bubble sort algorithm
    // for(int i = 1 ; i < n ; i++){ // n-1 passes
    //  // traversing 
    // //  for(int j = 0 ; j < (n-1) ; j++){                            // TimeComplexity = O(n^2)
    //     for(int j = 0 ; j < (n-1-i) ; j++){                          // Time Complexity = O(n^2) // but it is better code than above code cuz it has less iteration
    //         if( arr[j] > arr[j+1] ){
    //             swap( arr[j] , arr[j+1] );
    //         }
    //     }  // SpaceComplexity = O(1) for both
    // }

    // Bubble Sort Optimized 
    for(int i = 1 ; i < n ; i++){ // n-1 passes
        // traversing 
        bool flag = true;
        for(int j = 0 ; j < (n-1-i) ; j++){ //swap
            if(arr[j] > arr[j+1]){
                swap( arr[j] , arr[j+1] );
                flag = false;
            } // TC = O(n) for best case
        }     // TC = O(n^2) for avg and worst case
        if(flag == true){ // swap didn't happen means array sort ho gai
            break;
        }
    }
    for( int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}