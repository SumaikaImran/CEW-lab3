#include <stdio.h>
#include<math.h>
#include <string.h>
//-----------------------Q1:

// void swap(int*ptr1,int*ptr2);
// int main(){
// int n1,n2;printf("enter 1 number:");scanf("%d",&n1);printf("enter 2 number:");scanf("%d",&n2);
// swap(&n1,&n2);
// printf("now 1 number becomes: %d",n1);printf(" and 2 number becomes: %d",n2);
// return 0;
// }
// void swap(int*ptr1,int*ptr2){
 
// int t=*ptr1;
// *ptr1=*ptr2;
// *ptr2=t;

// }

//-----------------------Q2:

// void reverse(char *string);
// int main(){
//     char string[50];
//     printf("enter a string:");fgets(string,50,stdin);
//     reverse(string);
//     printf("now the string becomes: %s",string);
//     return 0;
// }
// void reverse(char *string){
//     int len=strlen(string);
   
//    for(int i=0;i<(len/2);i++){
//        char new=string[i];
//        string[i]=string[(len-1)-i-1];
//        string[(len-1)-i-1]=new;


//    }
  
// }

//------------------------Q3:

// int main(){
//     int n; printf("enter the number of elements in an array:");scanf("%d",&n);
//     int arr[n];
//     int *ptr=&arr[0];
//     //input array
//     for (int i=0;i<n;i++){
//         printf("enter the %d index value of an integer array:",i);scanf("%d",(ptr+i));
//     }
//      // output array
//     for(int i=0;i<n;i++){
//         printf("the value of index %d is : %d\n",i,*(ptr+i));
//     }
//     return 0;
// }

//---------------------------------Q4:

// int main(){
//     int arr[]={0,1,2,3,4,5,6,7,8,9};
//     int req_element=4;
//     int *ptr=&arr[0];
//     for (int i=0;i<9;i++){
//         if(*(ptr)==req_element){
//             printf("element found: %d",*(ptr));
//             return *ptr;
//         }
//        else{
//         ptr++;
//        }
//     }
//     return 0;
// }

//--------------------------------Q5:

// void addMatrices(int *arr1, int *arr2, int *arr3, int rows, int cols);
// void printArray(int *arr3, int rows, int cols);
// int main() {
//     int arr1[2][3] = {{1, 2, 3}, {3, 4, 5}};
//     int arr2[2][3] = {{1, 2, 3}, {3, 4, 5}};
//     int arr3[2][3];
//     int rows = 2;
//     int cols = 3;
//     addMatrices(&arr1[0][0], &arr2[0][0], &arr3[0][0], rows, cols);
//     printArray(&arr3[0][0], rows, cols);
//     return 0;
// }
// void addMatrices(int *arr1, int *arr2, int *arr3, int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             *(arr3 + i * cols + j) = *(arr1 + i * cols + j) + *(arr2 + i * cols + j);
//         }
//     }
// }
// void printArray(int *arr3, int rows, int cols) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < cols; j++) {
//             printf("%d ", *(arr3 + i * cols + j));
//         }
//         printf("\n");
//     }
// }