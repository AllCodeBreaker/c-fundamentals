#include <stdio.h>
#include <stdlib.h>

int main(){
    // Stores in stack and grows downwards (higher to lower address)
    char username[] = "allCodeBreaker"; 
    char profession[] = "Engineer" ;

    //Stores in heap and grows upwards (lower to higher address)
    int* numbers = (int*) malloc(5* sizeof(int));
    char* letters = (char*) malloc(5 * sizeof(char));

    if(letters == NULL || numbers == NULL){
        printf("Allocation failed!");
        return -1;        
    }

    for(int i = 0; i<5;i++){
        *(numbers + i) = i;
        *(letters + i) =  65 + i;
    } 


    printf("Variables\n");
    printf("username: %s    | Address:  %p | Size: %ld\n", username, &username, sizeof(username));
    printf("profession: %s  | Address:  %p | Size: %ld\n",profession, &profession, sizeof(profession));

    
    printf("\nDynamic allocations (malloc)\n");
    printf("Numbers: %d     | Address: %p | Size: %ld\n", *numbers, numbers, sizeof(numbers));
    printf("Letters: %c     | Address: %p | Size: %ld\n", *letters, letters, sizeof(letters));
    
    free(letters);
    free(numbers);
}