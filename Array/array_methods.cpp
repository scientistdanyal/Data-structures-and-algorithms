#include <iostream>
#include <vector>
using namespace std;


// Declaring functions
void init(int arr[], int n); //declaration
void show(int arr[], int n); //show element
void LinearSearch(int arr[], int n, int target); // Linear Search Algorithm
int LinearSearchWithReturn(int arr[], int n, int target);
void sorted_array(int nums[], int n); // this algorithn will sort the array
int binarySearch( int nums[], int target); // declare binary search
int largest(int nums[], int size); //find largest element
void bubble_sort(int nums[], int size); // sort array with bubble sort
void flagBubble_sort(int nums[], int size) // sort array with flag
void insertion_sort(int nums[], int size); // sort array with insertion sort







//insertion sort

void insertion_sort(int nums[], int size){
	
	int i, j;
	
	for(int i = 1; i < size; i++){
		
		int key = nums[i];
		j = i - 1;
		
		while(j >= 0 && key < nums[j]){
			nums[j+1] = nums[j];
			j--;
		}
		
		nums[j+1] = key;
			
	}
}


//Bubble sort without flag


void bubble_sort(int nums[], int size){
	int count = 0;
	for(int div = size - 1; div >  0; div--){
		
		for(int i = 0; i < div ; i++){
			count++;
			if (nums[i] > nums[i+1]){
				int temp = nums[i];
				nums[i] = nums[i+1];
				nums[i+1] = temp; 
				
			}
		}
		

	}
		cout << "Swaping perform " << count << endl;
}


//sort with bublle with flag
void flagBubble_sort(int nums[], int size){
	int count = 0;
	for(int div = size - 1; div >  0; div--){
		bool flag = false;
		
		for(int i = 0; i < div ; i++){
			count++;
			if (nums[i] > nums[i+1]){
				int temp = nums[i];
				nums[i] = nums[i+1];
				nums[i+1] = temp; 
				flag = true;
			}
		}
		
		if (flag==false){
			break;
		}

	}
		cout << "Swaping perform " << count << endl;
}




//find largest
int largest(int nums[], int size){
	
	int largest = 0;
	
	for (int i = 1; i < size; i++){
		
		if (nums[i] > nums[largest]){
			largest = i;
		}
	}
	return largest;
}



// Selection sorting
void sorted_array(int nums[], int n){
		
	int div, j, max_idx, count = 0;
	
	for (div = n - 1 ; div > 0; div--){
		
		
//		max_idx = largest(nums, i + 1);
		int largest = 0;
	
	for (int i = 1; i < div + 1; i++){
		count++;
		if (nums[i] > nums[largest]){
			largest = i;
			
		}
	}
		max_idx = largest;
				
		int temp = nums[div];
		nums[div] = nums[max_idx];
		nums[max_idx] = temp;

		
		
	}
	cout << "Swaping perform " << count << endl;
	cout << "--------After Sorting------- " << endl << "[ ";
	
	for (int i = 0; i < n; i++){
		if (i < n - 1){
		
		cout << nums[i] << ", ";
	}else {
		cout << nums[i]<< " ]" << endl;
	}
	}
}





// Binary Search
int binarySearch( int nums[],int n, int target){
	
	sorted_array(nums, n);
	int s, e, mid;
	
	
	s = 0;
	e = n-1;
	
	while (s <= e){
		mid = (s + e) / 2;
		if (target == nums[mid] ){
			return mid;
		}
		else if (nums[mid] < target){
			s = mid + 1;
		}
		else{
			
			e = mid - 1;
		}
		
	}
	return -1;
}


//array initialization
void init(int arr[], int n){


	for (int i = 0; i < n; i++){
		cout << "Provide Integer: \n";
		cin >> arr[i];
	}
}

// Displaying values
void show(int arr[], int n){
	

	cout << "--------Displaying Array elements------- " << endl << "[ ";
	
	for (int i = 0; i < n; i++){
		if (i < n - 1){
		
		cout << arr[i] << ", ";
	}else {
		cout << arr[i]<< " ]" << endl;
	}
	}
}



// Linear Search
void LinearSearch(int arr[], int n, int target){
	
	int i = 0;
	
	 while (i < n && target != arr[i]){
	 	i++;
	 }
	 if (i == n){
	 	cout << "Not Found";
	 }
	 else{
	 	cout << "Found at " << i;
	 }
}



int LinearSearchWithReturn(int arr[], int n, int target){
	
	int i = 0;
	
	
	 while (i < n && target != arr[i]){
	 	i++;
	 }
	 if (i == n){
	 	return -1;
	 }
	 else{
	 	return i;
	 }
}
int main(int argc, char** argv) {
	
	
	// Default array declaration 
	int arr[6] = {65,55,45,35,25,15};
	
	
	
	int opt; //option
	
	int target, result;
	do{
	cout << "Press 1 to Initialization: \n";
	cout << "Press 2 to Display: \n";	
	cout << "Press 3 to Perform Linear Search: \n";
	cout << "Press 4 to Perform Linear Search with return: \n";
	cout << "Press 5 to Binary Search.\n";
	cout << "Press 6 to Sort Array. (Selection sort)" << endl;
	cout << "Press 7 to find largest element in the array\n";
	cout << "Press 8 to Sort Array(Bubble Sort with flag)"<< endl;
	cout << "Press 9 to Sort Array(Insertion Sort)"<< endl;
	cout << "Press 10 to Sort Array(Bubble Sort without flag)"<< endl;
	cout << "Press 0 to Exit: \n";	
	cin >> opt;
	
	switch(opt){
		case 1:
			init(arr, sizeof(arr)/sizeof(int));
			break;
		case 2:
			show(arr, sizeof(arr)/sizeof(int));
			break;
		case 3:
			
			cout<<"Type your target: ";
			cin >> target;
			LinearSearch(arr, sizeof(arr)/sizeof(int), target);
			
		case 4:
			cout<<"Type your target: ";
			cin >> target;
			result = LinearSearchWithReturn(arr, sizeof(arr)/sizeof(int), target);
			if (result == -1){
				cout << "Not Found!" << endl;
			}
			else{
				cout << "Found at index: " << result;
			}
			break;
		
		case 5:
			cout << "Type your target: ";
			cin >> target;
			result = binarySearch(arr, sizeof(arr)/sizeof(int), target);

    		if (result == -1) {
      		cout << "Not Found!" << endl;
  			} else {
       		 cout << "Found target " << target << " at index " << result << endl;
   			}
   			 break;
   		
   		case 6:
   			sorted_array(arr, sizeof(arr)/sizeof(int));
   			break;
   		case 7:
   		
   			cout << "Largest Eelement present at index: "<< largest(arr, sizeof(arr)/sizeof(int)) << endl;
   			break;
   		
   		case 8:
   		
   			flagBubble_sort(arr, sizeof(arr)/sizeof(int));
   			break;
   		case 9:
   		
   			insertion_sort(arr, sizeof(arr)/sizeof(int));
   			break;
   		case 10:
   		
   			bubble_sort(arr, sizeof(arr)/sizeof(int));
   			break;
		case 0:
			exit(-1); // if user press 0 do-while will exit
	}
		
	} while(true);
	//array initialization

	sorted_array(arr, 6);
	
//	binarySearch(arr)
	
	
	
}
