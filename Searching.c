//including all the required header files
#include<stdio.h>
#include<math.h>
#include<stdlib.h>


//function which generate the random numbers and return those numbers
int* generate_No(){
int *ptr=(int*)malloc(sizeof(int)*300);   //creating block to store 300 numbers
srand(191020869);                         //setting seed
for(int i=0;i<300;i++)                   //loop to generate numbers
*(ptr+i)=rand();
return ptr;
}

//function for linear search
int linear_Search(int *arr,int n,int element){
for(int i=0;i<n;i++)             //loop that iterates over each element of an array
if(arr[i]==element)              //condition checks that elements is equal or not
return i;                        //returning index on found
return -1;                      //return -1 if element is not found
}

//function for interpolation search
int interpolation_Search(int *arr, int n, int x){
int bot = 0, top = (n - 1);       // Find indexes of two corners

// Since array is sorted, an element present
// in array must be in range defined by corner
while (bot <= top && x >= arr[bot] && x <= arr[top])
{
if (bot == top)
{
if (arr[bot] == x) return bot;
return -1;
}
// Probing the position with keeping
// uniform distribution in mind.
int loc = bot + (((double)(top - bot) /
(arr[top] - arr[bot])) * (x - arr[bot]));

if (arr[loc] == x)  // Condition of target found
return loc;
if (arr[loc] < x) // If x is larger, x is in upper part
bot = loc + 1;
else              // If x is smaller, x is in the lower part
top = loc - 1;
}
return -1;
}


// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int *arr, int l, int r, int x){
if (r >= l) {
int mid = l + (r - l) / 2;

// If the element is present at the middle
// itself
if (arr[mid] == x)
return mid;

// If element is smaller than mid, then
// it can only be present in left subarray
if (arr[mid] > x)
return binarySearch(arr, l, mid - 1, x);

// Else the element can only be present
// in right subarray
return binarySearch(arr, mid + 1, r, x);
}

// We reach here when element is not
// present in array
return -1;
}


//Bubble classify to classify an array for binary and interpolation search
void classify(int *ptr,int n){
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(ptr[i]>ptr[j]){
int temp=ptr[i];
ptr[i]=ptr[j];
ptr[j]=temp;
}
}
}
}


int main(){

int *ptr=(int*)malloc(sizeof(int)*300); //Block for storing 300 numbers
ptr=generate_No();                      //store numbers in block
FILE *fptr;
fptr = fopen("100data.txt", "w");       //output of the list file

//handling error condition
if (fptr == NULL) {
printf("Error!");
exit(1);
}

//writing data to file
for(int i=0;i<300;i++){
fprintf(fptr, "%d\n", *(ptr+i));
}
fclose(fptr);

//getting the last element and adding all data into array
//array to store numbers
int a[300],x;
fptr = fopen("100data.txt", "r");
for(int i=0;i<300;i++){
fscanf(fptr,"%d", &x);
a[i]=x;
}

//printing last element
printf("%d",x);
fclose(fptr);
return 0;
}
