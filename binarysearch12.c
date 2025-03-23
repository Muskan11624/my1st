int binarysearch(int arr[], int size, int element)
{
    int low,mid,high;
    low=0;
    high=size-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==element)
        return mid;
        if(arr[mid]<element)
        low=mid+1;
        else
        high=mid-1;
    }
    return -1;
}
int main()
{
    int arr[]={1,3,4,5,56,64,73,123,225,444};
    int size=sizeof(arr)/sizeof(int);
    int element=444;
    int searchindex=binarysearch(arr,size,element);
    if(searchindex=-1)
    printf("The element %d is not found at any index",element);
    else
    printf("The element %d is found at index %d",element,searchindex);
    return 0;
}