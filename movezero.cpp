#include<bits/stdc++.h>
using namespace std;
int main(){
    //int arr[10]={1,0,2,3,2,0,0,4,5,1};
    //int arr[7]={1,2,3,3,4,5,0};
    int arr[1]={0};
    int size=1;
    int countnzero=0;
    
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            countnzero=countnzero+1;
        }
    }

    
    
    int jump;

    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            jump=i;
            arr[0]=arr[i];
            
            break;
            
        }
        else{

        }
    }

    int i=0;
    for(int j=1;j<size;j++){
        if(arr[j]!=0&&j!=jump){
            arr[i+1]=arr[j];
            i=i+1;

        }
    }

    for(int i=countnzero;i<size;i++){
        arr[i]=0;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
}