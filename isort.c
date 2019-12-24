
//this function moves i numbers to the right stars with where 
void shift_element(int* arr,int i){
    for(int k = i; k>0 ;k--){
        *(arr+k) = *(arr+k-1);
    }
}



//this function does insertion sort to the array
void insertion_sort(int *arr, int len) {
	int i, j, k; 
    // Sort the numbers using pointers 
    for (i = 0; i < len; i++) { 
        for (j = i + 1; j < len; j++) { 
            if (*(arr + j) < *(arr + i)) { 
                k = *(arr + i); 
                *(arr + i) = *(arr + j); 
                *(arr + j) = k; 
            } 
        } 
    }
}
  
  














    