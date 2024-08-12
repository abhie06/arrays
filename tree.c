#include<stdio.h>
int n;
void insert(int *arr){
    printf("Enter the length of the array:\n");
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        printf("arr[%d] = ",i);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
}
int sum(int *arr, int n){
    if(n==0){
        return 0;
    }
    else{
        return sum(arr, n-1) + arr[n-1];
    }
}
int duplicates(int *arr){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count = count + 1;
            }
        }
    }
    return count;
}
// void uniqueElements(int *arr){
//     int isUnique;
//     for(int i=0;i<n;i++){
//         isUnique = 1;
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 isUnique = 0;
//                 break;

//             }

//         }
//             if(isUnique){
//                 printf("%d", arr[i]);
//             }
//     }
// }

void freq(int *arr){
    int count, isUnique;
    for(int i=0;i<n;i++){
        count = 0;
        isUnique = 0;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                isUnique = 1;
                count++;
            }
        }
        if(isUnique==0){
        printf("\n%d is %d\n",arr[i], count+1);
        }
    }
}
void ascending(int *arr){
    for(int i=0;i<n;i++){
        for(int j= i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;                    
            }
        }
        printf("\n%d ", arr[i]);
    }
}
void insertVal(int *arr, int num, int n){
    arr[n] = num;
    n++;
    for(int i=0;i<n;i++){
        printf("\n%d ",arr[i]);
    }
}
int main(){
    int arr[10];
    insert(arr);
    // int a = sum(arr, n);
    // printf("\n%d\n",a);
    // int c = duplicates(arr);
    // printf("\nThe number of duplicates are: %d\n", c);
    // freq(arr);
    // ascending(arr);
    insertVal(arr, 10, n);
}