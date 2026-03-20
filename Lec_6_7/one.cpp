//// Calculate grade for multiple students
// #include<iostream>
// using namespace std;
// void calculateGrade(int marks){
//     if(marks>90){
//         cout<<"Grdae A"<<endl;
//     }
//     else if(marks>80){
//         cout<<"Grdae B"<<endl;
//     }
//     else if(marks>70){
//         cout<<"Grade C"<<endl;
//     }
//     else if(marks>60){
//         cout<<"Grade D"<<endl;
//     }
//     else{
//         cout<<"Grade F"<<endl;
//     }
// }
// int main(){
//     calculateGrade(93);
//     calculateGrade(52);
// }



//Types of Functions
//With Return Value
// #include<iostream>
// using namespace std;
// int square(int n){
//     return n*n;
// }
// int main(){
//     int num;
//     cin>>num;
//     cout<<square(num);
    
// }



//Without Return Value
// #include<iostream>
// using namespace std;
// void greet(int n1,int n2){
//     cout<<n1+n2;
// }
// int main(){
//     int a=10,b=20;
//     greet(a,b);
// }


//Without Parameters
// #include<iostream>
// using namespace std;
// int greet(){
//     return 2026;
// }
// int main(){
//     cout<<greet();
// }


//With Parameters
// #include<iostream>
// using namespace std;
// void greet(int n){
//     cout<<n; 
// }
// int main(){
//    greet(10);
// }



//Function Declaration vs Definition
// #include<iostream>
// using namespace std;
// int add(int n1,int n2);   //Declaration (tells compiler it exists)
// int add(int n1,int n2){   //// Definition (actual code)

//     return n1+n2;
// }

// int main(){
//     cout<<add(5,3);
// }


//Pass by Value (Default)
// #include<iostream>
// using namespace std;
// void trychange(int x){
//     x=100;
// }
// int main(){
//     int num=5;
//     trychange(num);
//     cout<<num;
// }


//Pass by Reference (Using &)
// #include<iostream>
// using namespace std;
// void trychange(int &a){
//     a=100;
// }
// int main(){
//     int num=5;
//     trychange(num);
//     cout<<num;
// }


//Real Example: Swap
//Wrong (Pass by Value)
// #include<iostream>
// using namespace std;
// void swap(int a,int b){
//     int c=a;
//     a=b;
//     b=c;
// }
// int main(){
//     int x=10,y=20;
//     swap(x,y);
//     cout<<x<<" "<<y;
// }


//Correct (Pass by Reference)
// #include<iostream>
// using namespace std;
// void swap(int &a,int &b){
//     int c=a;
//     a=b;
//     b=c;
// }
// int main(){
//     int x=10,y=20;
//     swap(x,y);
//     cout<<x<<" "<<y;
// }


//Default Parameters
// #include<iostream>
// using namespace std;
// void greet(string name="Guest"){
//    cout<<"Hello"<<name<<endl;
// }
// int main(){
//     greet();
//     greet("Joy");
// }


//Function Overloading
// #include<iostream>
// using namespace std;
// int sum(int a,int b){
//   return a+b;
// }
// int sum(int a,int b,int c){
//     return a+b+c;
// }
// float sum(float a,float b){
//     return a+b;
// }
// int main(){
//     cout<<sum(1,2,3)<<endl;
//     cout<<sum(4,5)<<endl;
//     cout<<sum(1.1f,1.2f);
// }


//Why Arrays?
//The Problem
// #include<iostream>
// using namespace std;
// int main(){
//   int student1 = 85, student2 = 90, student3 = 78;
//   cout<<student1<<" "<<student2<<" "<<student3;
// }



//The Solution
// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5] = {85, 90, 78, 92, 88};
//     for(int i=0;i<5;i++){
//         cout<<marks[i]<<" ";
//     }
// }



//Accessing Elements
// #include<iostream>
// using namespace std;
// int main(){
//     int marks[]={85,90,78};
//     cout<<marks[0]<<endl;
//     cout<<marks[1]<<endl;

//     marks[1]=95;
//     for(int i=0;i<3;i++){
//         cout<<marks[i]<<" ";
//     }
// }


//Taking Input
// #include<iostream>
// using namespace std;
// int main(){
//     int marks[5];
//     for(int i=0;i<5;i++){
//         cin>>marks[i];
//     }
// }


//Common Operations
//1. Sum and Average
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={85,90,78,92,88};
//     int sum=0,avg;
//     for(int i=0;i<5;i++){
//         sum=sum+arr[i];
//     }
//     cout<<sum<<endl;
//     avg=sum/5;
//     cout<<avg;
// }


//2. Find Maximum
// #include<iostream>
// using namespace std;
// int main(){
//    int arr[5]={85,90,78,92,88};
//    int max=arr[0];
//    for(int i=1;i<5;i++){
//       if(arr[i]>max){
//         max=arr[i];
//       }
//    }
//    cout<<max;
// }



//3. Linear Search
// #include<iostream>
// using namespace std;
// int main(){
//     int searchValue=78;
//     int position=-1;
//     int arr[5]={85,90,78,92,88};
//     for(int i=0;i<5;i++){
//         if(arr[i]==searchValue){
//               position=i;
//               break;
//         }
//     }
//     cout<<position;
// }



//4. Count Elements
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={85,90,78,92,88};
//     int passed=0;
//     for(int i=0;i<5;i++){
//       if(arr[i]>60){
//         passed++;
//       }
//     }
//     cout<<passed;
// }


//5. Reverse Array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={85,90,78,92,88};
//     for(int i=0;i<5/2;i++){
//        int temp=arr[i];
//        arr[i]=arr[4-i];
//        arr[4-i]=temp;
//     }

//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }



//Arrays with Functions
//Important: Arrays are passed by reference automatically!
// #include<iostream>
// using namespace std;
// int modifyArray(int arr[],int size){
//     arr[0]=999;
// }
// int main(){
//     int arr[]={10,20,30};
//     modifyArray(arr,3);
//     cout<<arr[0];
// }



//Display Array
// #include<iostream>
// using namespace std;
// void modifyArray(int arr[],int size){
//     arr[0]=11,arr[1]=15,arr[2]=25;
// }
// int main(){
//     int arr[]={10,20,30};
//     modifyArray(arr,3);

//     for(int i=0;i<3;i++){
//         cout<<arr[i]<<" ";
//     }
// }



//Find Maximum
// #include<iostream>
// using namespace std;
// void findMax(int arr[],int size){
//     int max=arr[0];
//     for(int i=0;i<5;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<max;
// }
// int main(){
//     int arr[]={85,90,78,92,88};
//     findMax(arr,5);
// }



//## 2D Arrays
//"Array of arrays" - for tables/matrices.


// #include<iostream>
// using namespace std;
// int main(){
//     int marks[3][4] = {
//     {85, 90, 78, 88},  // Student 1
//     {92, 88, 85, 90},  // Student 2
//     {78, 85, 92, 87}   // Student 3
// };

// // Access
//    cout << marks[0][0]<<" ";  // 85
//    cout << marks[1][1];  // 85

// }



// #include<iostream>
// using namespace std;
// int main(){
//     int marks[3][4]={
//         {85,90,78,88},
//         {92,88,85,90},
//         {78,85,92,87}
//     };

//     for (int i = 0; i < 3; i++) {
//     int total = 0;
//     for (int j = 0; j < 4; j++) {
//         total += marks[i][j];
//     }
//     cout << "Student " << i+1 << ": " << total << endl;
// }

// }


//Problem 1: Find the Largest Element
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5] = {-5, -2, -8, -3, -4};
//     int largest=arr[0];
//     for(int i=1;i<5;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     cout<<largest;
// }


//Problem 2: Find the Second Largest Element
// #include<iostream>
// using namespace std;
// int main(){
//       int arr[6]={85,90,78,92,88,92};
//         int largest=arr[0];
//         int secondLargest=-1;
//         for(int i=1;i<6;i++){
//             if(arr[i]>largest){
//                 secondLargest=largest;
//                 largest=arr[i];
//             }
//             else if(arr[i]>secondLargest && arr[i]!=largest){
//                 secondLargest=arr[i];
//             }
//         }
//         cout<<secondLargest;
// }


//Problem 3: Reverse an Array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={85,90,78,92,88};
//     for(int i=0;i<5/2;i++){
//         int temp=arr[i];
//         arr[i]=arr[4-i];
//         arr[4-i]=temp;
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }


//Problem 4: Check if Array is Sorted
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={85,90,78,92,88};
//     for(int i=0;i<5;i++){
//         if(arr[i]>arr[i+1]){
//             cout<<"Not Sorted";
//             return 0;
//         }
//     }
//     cout<<"Sorted";
// }



//Problem 5: Left Rotate Array by 1 Position
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,3,4,5};
//     int temp=arr[0];
//     for(int i=0;i<4;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[4]=temp;
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
// }



//Problem 6: Remove Duplicates from Sorted Array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1, 1, 2, 2, 3, 4, 4};
//     int n=7;
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=arr[j]){
//            arr[++j]=arr[i];
//         }
//     }
//     int newSize=j+1;
//     for(int i=0;i<newSize;i++){
//         cout<<arr[i]<<" ";
//     }
// }




//Problem 7: Move All Zeros to End
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1, 0, 2, 0, 3, 4};
//     int n=6;
//     int j=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]!=0){
//             arr[j++]=arr[i];  
//         }
//     }
//     while(j<n){
//         arr[j++]=0;
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }



//Problem 8: Find Missing Number
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4]={1,2,4,5};
//     int n=5;
//     int sum=0;
//     sum=sum+n*(n+1)/2;
//     int arr_sum=0;
//     for(int i=0;i<4;i++){
//         arr_sum=arr_sum+arr[i];
//     }
//     int miss=sum-arr_sum;
//     cout<<miss;
// }


//Problem 9: Linear Search
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={85,90,78,92,88};
//     int n=5;
//     int target=78;
//     int index=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]==target){
//             index=i;
//             break;
//         }
//     }
//     cout<<index;
// }





//Problem 10: Count Frequency of Each Element
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[7]={1,2,2,3,3,3,4};
//     int n=7;
//     int freq[5]={0};
//     for(int i=0;i<n;i++){
//         freq[arr[i]]++;
//     }
//     for(int i=0;i<5;i++){
//         cout<<i<<" Appear: "<<freq[i]<<" Times"<<endl;
//     }
// }



//Now Practice These!
//Try solving these variations:
//1.Find the smallest element in an array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8]={12, 25, 8, 55, 10, 33, 17, 11};
//     int smallest=arr[0];
//     for(int i=1;i<8;i++){
//         if(smallest>arr[i]){
//             smallest=arr[i];
//         }
//     }
//     cout<<smallest;
// }


//Sum of all elements in an array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[8]={12,25,8,55,10,33,17,11};
//     int sum=0;
//     for(int i=0;i<8;i++){
//        sum=sum+arr[i];
//     }
//     cout<<sum;
// }



//Check if array is palindrome (same forwards and backwards)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,2,1};
//     int left=0,right=4;
//     while(left<=right){
//         if(arr[left]!=arr[right]){
//             cout<<"Not Palindrome";
//             return 0;
//         }
//         left++;
//         right--;
//     }
//     cout<<"Palindrome";
// }




//Merge two sorted arrays into one sorted array
// #include<iostream>
// using namespace std;
// int main(){
//     int arr1[5]={1,3,5,7,9};
//     int n=5;
//     int arr2[3]={2,4,6};
//     int m=3;
//     int arr3[8]={0};
//     int l=8;
//     int i=0,j=0,k=0;
//     while(i<n && j<m){
//         if(arr1[i]<arr2[j]){
//             arr3[k]=arr1[i];
//             k++;
//             i++;
//         }
//         else{
//             arr3[k]=arr2[j];
//             k++;
//             j++;
//         }
//     }

//     while(i<n){
//         arr3[k]=arr1[i];
//         k++;
//         i++;
//     }
//     while(j<m){
//         arr3[k]=arr2[j];
//         k++;
//         j++;
//     }

//     for(int z=0;z<l;z++){
//         cout<<arr3[z]<<" ";
//     }
// }



//Right rotate array by 1 position (opposite of left rotate)
#include<iostream>
using namespace std;
int main(){
   int arr[5]={1,2,3,4,5};
   int n=5;
   int temp=arr[n-1];
   for(int i=n-1;i>=0;i--){
      arr[i+1]=arr[i];
   }
   arr[0]=temp;

   for(int i=0;i<5;i++){
     cout<<arr[i]<<" ";
   }
}

















