#include<iostream>
#include<vector>

using namespace std;

struct node{
	int data;
	struct node* left;
	struct node* right;
};

int main(){

	vector<node> tree;

	/**/
	struct node temp;
	temp.data=5;
	temp.left=NULL;
	temp.right=NULL;

	tree.push_back(temp);
	/**/

	/**/
	struct node temp2;
	temp2.data=2;
	temp2.left=NULL;
	temp2.right=NULL;

	tree.push_back(temp2);
	/**/

  /**/
	struct node temp3;
	temp3.data=3;
	temp3.left=NULL;
	temp3.right=NULL;

	tree.push_back(temp3);
	/**/

	//Obtener la raiz
	tree.front().left=&temp2;
	
	//temp2.right=&temp3;
	
	//Procedimiento para insertar el nodo 3
	int k=0;
	for(int i=0; i<tree.size();i++){		
		if(k==1){
			if(temp3.data>tree[i].data){
				tree[i].right=&temp3;
				cout<<":)";
			}else{
				tree[i].left=&temp3;
				cout<<":(";
			}
		}
		k++;
	}

	//tarea generalizar el procedimiento para insertar cualquier valor en el arbol
	


	for(auto item:tree){
		cout<<endl<<"data : "<<item.data;
		cout<<endl<<"left : "<<item.left;
		cout<<endl<<"right : "<<item.right<<endl;
	}

	

	return 0;
}