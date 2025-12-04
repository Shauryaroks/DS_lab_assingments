#include <iostream>

using namespace std;

class Darray{
    int size;
    int *arr;
    int capacity;
    public:
    Darray(): arr(nullptr), size(0), capacity(0) {}

    ~Darray() {
        delete[] arr;
    }
    
    void create(int newSize){
        int *newarr = new int[newSize];
        for(int i=0;i<size;i++){
            newarr[i] = arr[i];
        }
        delete[] arr;
        arr = newarr;
        size=newSize;
    }
    
    void initialize(int n){
        arr = new int[n];
        for(int i=0;i<n;i++){
            cout<<"enter element";
            cin>>arr[i];
        }
        size = n;
        
    }
    void Display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    void Insert(int loc, int value){
        if(size>=capacity){
            create(size+1);        
        }
        else{size=size+1;}
        for(int i=size;i>=loc;i--){
            arr[i+1] = arr[i];    
        }
        arr[loc]=value;
    }

    void Delete(int loc){
        if(loc>=size){cout<<"index is out of range";
            return;
        }
        for(int i=loc;i<size-1;i++){
            arr[i]=arr[i+1];
        }
        size = size-1;
    }

    int LinearSearch(int val){
        for(int i=0;i<size;i++){
            if(arr[i]==val){
                cout<<"element found at"<<i;
                return i; }
        }
        cout<<"element not found";
        return 0;
    }
};

int main(){

    int command, n;
    Darray arr;
    int loc;
    int val;

    while(command!=6){
        cout<<"Enter Command:"<<endl<<"1.CREATE"<<endl<<"2.DISPLAY"<<endl<<"3.INSERT"<<endl<<"4.DELETE"<<endl<<"5.LINEAR SEARCH"<<endl<<"6.EXIT";
        cin>>command;
        switch(command){
            case 1:
                cout<<"enter number of elements";
                cin>>n;
                arr.initialize(n);
                break;
            case 2:
                arr.Display();
                break;
            case 3:
                cout<<"enter location and value";
                cin>>loc;
                cin>>val;
                arr.Insert(loc,val);
                break;
            case 4:
                cout<<"which index to Delete";
                cin>>val;
                arr.Delete(val);
                break;
            case 5:
                cout<<"enter value to search for";
                cin>>val;
                arr.LinearSearch(val);
                break;
            case 6:
                break;
            default:
                cout<<"invalid command";
                break;
        }
    }

}
