#include <iostream>
using namespace std;
class Node{
    public:
    int value;
    Node* left;
    Node* right;
    Node(int value){
        this -> value=value;
        this->left=this->right=nullptr;
    }
};
class BinarySearchTree{
    public :
    Node * root;
    BinarySearchTree(){
        this ->root=nullptr;
    }
    public:
    void insert(int value){
        Node* node=new Node(value);
        if(root==nullptr){
            root=node;
            return;
        }
        Node* current=root;
        Node * parent=nullptr;
        while(current!=nullptr){
            parent=current;
            if(value<current -> value){
                current=current ->left;
            }else if(value > current ->value){
                current=current ->right;
            }
            else{
                return;
            }
         }
         if(value<parent->value){
            parent->left=node;
         }else{
            parent->right=node;
         }
        }
        void deleteByValue(int value){
            if(root==nullptr){
                cout<<"Empty tree";
                return;
            }
            Node* current=root;
            Node* parent=nullptr;
            while(current!=nullptr && current -> value !=value){
                parent=current;
                if(value<current->value){
                    current=current->left;
                }else{
                    current=current->right;
                }
            }
            if(current==nullptr){
                cout<<"Value not present in the tree";
                return;
            }
            else{
                if(current->left!=nullptr && current->right !=nullptr){
                    Node* succssor=current->right;
                    Node* successorParent=current;
                    while(succssor->left !=nullptr){
                        successorParent=succssor;
                        succssor=succssor->left;
                        
                    }
                    current->value=succssor->value;
                    if(successorParent->left==succssor){
                        successorParent->left=succssor->right;
                    }
                    else{
                        successorParent->right=succssor->right;
                    }
                  
                }
                else{
                    Node * succesor=current;
                    if(current->left==nullptr){
                        succesor=current->right;
                    }else{
                        succesor=current->left;
                    }
                    if(parent==nullptr){
                        root=succesor;
                    }else if(parent->left==current){
                        parent->left=succesor;

                    }else{
                        parent->right=succesor;
                    }
                    
                }
            }
        }
        void inorderTraversal(){
            inorder(root);
            cout<<endl;

        }
        void inorder(Node* root){
            if(root!=nullptr){
                inorder(root->left);
                cout<<root->value<<" ";
                inorder(root->right);
            }
        }
        void preordeTraversal(){
            preorder(root);
            cout<<endl;

        }
        void preorder(Node* root){
            if(root!=nullptr){
                cout<<root->value<<" ";
                preorder(root->left);
                preorder(root->right);
            }
        }
        void postorderTraversal(){
            postorder(root);
            cout<<endl;
        }
        void postorder(Node* root){
            if(root!=nullptr){
            postorder(root->left);
            postorder(root->right);
            cout<<root->value<<" ";
            }
        }
};
int main(){
    BinarySearchTree tree;
    tree.insert(17);
    tree.insert(19);
    tree.insert(10);
    tree.insert(12);
    tree.insert(7);
    tree.insert(21);
    tree.inorderTraversal();
    tree.postorderTraversal();
    tree.preordeTraversal();
    tree.deleteByValue(19);
    tree.inorderTraversal();

}