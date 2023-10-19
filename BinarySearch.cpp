int binarySearch(int arr[],int size, int key){

int start=0;
int end=size-1;

int mid=start + (end-start)/2;

while(start<=end){
    if(arr[mid]==key){
        return mid;
    }
    if(key>arr[mid]){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
    mid=start + (end-start)/2;
}
return -1;
}

int main(){

int even[6]= {2,4,7,8,22,45};
int odd[5]={4,7,12,32,77};

int evenindex= binarySearch(even,6,80);
cout<<"index of 46 is\n"<<evenindex<<endl;

int oddindex=binarySearch(odd,5,80);
cout<<"index of 78 is\n"<<oddindex<<endl;


return 0;
}
