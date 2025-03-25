#include<iostream>
using namespace std;
int main(){
	// input
	int size_of_a,search,a[20];
	cout<<"\n======== Input =============\n";
	cout<<"Enter size fo array : ";cin>>size_of_a;
	for(int i = 0;i<size_of_a;i++){
		cout<<"Enter value a["<<i<<"] :";cin>>a[i];
	}
	// output 
	cout<<"\n======== Output =============\n";
	for(int i =0;i<size_of_a;i++){
		cout<<"value a ["<<i<<"] = "<<a[i]<<endl;
	}
	// search
	cout<<"======== Search =============\n";
	cout<<"Enter value a for search : ";cin>>search;
	for(int i=0;i<size_of_a;i++){
		if(a[i]==search){
			cout<<"a ["<<i<<"] = "<<a[i]<<endl;
			break;
		}
	}
	
	
	return 0;
}
