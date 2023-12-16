#include <iostream>
using namespace std;
void input(int a[]){
	cout<<"Nhap vao tung phan tu cua mang , nhap 0 de dung lai (duoi 100 phan tu) : "<<endl;
	for (int i=1;i<100;i++){
		cout<<"Nhap phan tu thu "<<i<<" : ";
		cin>>a[i];
		if (a[i]==0){
			break;
		}
	}
}
void output(int a[]){
	cout<<"Xuat mang : "<<endl;
	for(int i=1;i<100;i++){
		if (a[i]==0){
			break;
		}else{
			cout<<"Phan tu thu "<<i<<" : "<<a[i]<<endl;
		}
	}
}
void max(int a[]){
	int max = a[1] ;
	for (int i=2;i<=100;i++){
		if (a[i]!=0){
			if (a[i]>max){
				max=a[i]; 
			} 
		}else{
			break; 
		}
		 
	}  
	cout<<"Gia tri lon nhat cua mang la : " <<max<<endl; 
} 
void count(int a[]){
	int dem=0;
	for (int i=1;i<100;i++){
		if (a[i]!=0){
			dem=dem+1;
		}else{
			break;
		}
	}
	cout<<"So phan tu co trong mang la : "<<dem<<endl;
}
int gopmang(int a[],int b[],int c[]){
	int t; 
	for (int i=1;i<=100;i++){
		if(a[i]!=0){
			c[i]=a[i];
		}else{
			t=i-1;
			break;
		}
	}
	for(int i=1;i<=100;i++){
		if (b[i]!=0){
			c[t+i]=b[i];
		}else{
			t=t+i;
			break;
		}
	}
	c[t]=0;
} 
int sapxep(int a[]){
	for(int i=1;i<=sizeof(a);i++) {
		if (a[i]!=0){
			for (int y=i;y<=sizeof(a);++y) {
				if (a[y]!=0){
					if(a[i]<a[y]){
						int x=a[i];
						a[i]=a[y];
						a[y]=x; 
					}
				}else{
					break; 
				} 
			}
		}else{
			break; 
		} 
	}
} 
int hoanvi(int a[]){
	int x,y;
	cout<<"Nhap vao dia chi hai phan tu can hoan vi: ";
	cin>>x>>y;
	int t;
	t=a[x];
	a[x]=a[y];
	a[y]=t;
}
int main(){
	int a[100],b[100],c[200];
	cout<<"Mang a: "<<endl;
	input(a);
	cout<<"Mang b: "<<endl;
	input(b);
	count(a);
	gopmang(a,b,c);
	output(c);
	max(c);
	sapxep(c);
	output(c); 
	hoanvi(c);
	output(c);
	return 0;
}
