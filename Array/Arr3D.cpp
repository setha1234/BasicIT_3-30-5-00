// Array 3D 
// We are have 3 Value is : Block Rows and Columns
// Syntax : DataType ArrName[Block][Rows][Columns];

#include<iostream>
using namespace std;
int main(){
	int arr[3][6][2];
	// input - 
	cout<<"This is input array 3d :"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<6;j++){
			for(int k=0;k<2;k++){
				cout<<"Enter value : ";cin>>arr[i][j][k];
			}
		}
	}
	// output - 
	cout<<"This is output array 3d : "<<endl;
	for(int i = 0;i<3;i++){
		cout<<"Block ["<<i<<"] : "<<endl;
		for(int j = 0;j<6;j++){
			cout<<"Row ["<<j<<"] :"<<endl;
			for(int k = 0;k<2;k++){
				cout<<"arr ["<<k<<"] = "<<arr[i][j][k]<<", ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	return 0;
}
