#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	cout<<"输入关系矩阵的行列数：";
	cin>>n;
	int **a=new int * [n];
	for(int i=0;i<n;i++)
	{
		a[i]=new int [n];
	}
	cout<<"输入关系矩阵："<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	//自反闭包 
	int **b=new int * [n];
	for(int i=0;i<n;i++)
	{
		b[i]=new int [n];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			b[i][j]=a[i][j];
			b[i][i]=1;
	}
	cout<<"自反闭包的关系矩阵为："<<endl;
 	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cout<<b[i][j]<<' ';
		cout<<endl;
	}
	delete []b;
	//对称闭包
	 int **c=new int *[n];
	for(int i=0;i<n;i++)
	{
		c[i]=new int [n];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			c[i][j]=a[i][j];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(c[i][j]==1) c[j][i]=1;
		}
	}
	cout<<"对称闭包的关系矩阵为："<<endl;
 	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cout<<c[i][j]<<' ';
		cout<<endl;
	}
	delete []c;
	//传递闭包 
	 int **d=new int *[n];
	for(int i=0;i<n;i++)
	{
		d[i]=new int [n];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			d[i][j]=a[i][j];
	}
    for(int i = 0; i < n; i++)
        for(int j = 0; j <n; j++)
            if(a[j][i]){
            	for(int k=0;k<n;k++)
            	d[j][k]+=a[i][k];
			}
	cout<<"传递闭包的关系矩阵为："<<endl; 
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
		if(d[i][j]>1) d[i][j]=1;
		cout<<d[i][j]<<' ';}
		cout<<endl;
	}
	delete []a;
}


