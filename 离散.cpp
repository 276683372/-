#include<iostream>
#include<string>
using namespace std;

int main(){
	int n;
	cout<<"�����ϵ�������������";
	cin>>n;
	int **a=new int * [n];
	for(int i=0;i<n;i++)
	{
		a[i]=new int [n];
	}
	cout<<"�����ϵ����"<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	}
	//�Է��հ� 
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
	cout<<"�Է��հ��Ĺ�ϵ����Ϊ��"<<endl;
 	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cout<<b[i][j]<<' ';
		cout<<endl;
	}
	delete []b;
	//�ԳƱհ�
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
	cout<<"�ԳƱհ��Ĺ�ϵ����Ϊ��"<<endl;
 	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		cout<<c[i][j]<<' ';
		cout<<endl;
	}
	delete []c;
	//���ݱհ� 
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
	cout<<"���ݱհ��Ĺ�ϵ����Ϊ��"<<endl; 
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
		if(d[i][j]>1) d[i][j]=1;
		cout<<d[i][j]<<' ';}
		cout<<endl;
	}
	delete []a;
}


