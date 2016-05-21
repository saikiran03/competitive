#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;

#define boost ios_base::sync_with_stdio(false); cin.tie(0);
#define tcase int _tc; cin >> _tc; while(_tc--)
#define rep(i,n) for(int i=0; i<n; i++)
#define FOR(i,a,b) for(int i=a; i<=b; i++)
#define tr(it,x) for(auto it=x.begin(); it!=x.end(); it++)
#define all(x) x.begin(), x.end()
#define mp make_pair
#define pb push_back
#define rf freopen("in.txt","r",stdin);
#define wf freopen("out.txt","w",stdout);

struct node{
	int data;
	node *left;
	node *right;
};
typedef node node;

node* insert(node *tree, int n){
	if(tree==NULL){
		tree = new node();
		tree->left = NULL;
		tree->right = NULL;
		tree->data = n;
	}else{
		if(tree->data > n)
			tree->left = insert(tree->left, n);
		else
			tree->right = insert(tree->right, n);
	}
	return tree;
}

void preorderTraversal(node *root){
	if(root==NULL)
		return;
	
	cout << root->data << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right);
	return;
}

void inorderTraversal(node *root){
	if(root==NULL)
		return;
		
	inorderTraversal(root->left);
	cout << root->data << " ";
	inorderTraversal(root->right);
	return;
}

void postorderTraversal(node *root){
	if(root==NULL)
		return;
		
	postorderTraversal(root->left);
	postorderTraversal(root->right);
	cout << root->data << " ";
	return;
}

int main(){
	boost;
	// rf; wf;
	int n,t,c=1;
	tcase{
		cin >> n;
		node *root = NULL;
		node *p;
		cin >> t;
		root = insert(root, t);
		rep(i,n-1){
			cin >> t;
			p = insert(root, t);
		}
		cout << "Case " << c << ":\n";
		cout << "Pre.: "; preorderTraversal(root); cout << endl;
		cout << "In..: "; inorderTraversal(root); cout << endl;
		cout << "Post: "; postorderTraversal(root); cout << endl;
		c++; if(_tc){ cout << endl;}
	}
}