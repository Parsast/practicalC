#include<stdio.h>
#include<stdlib.h>

struct tnode{
    int data;
    struct tnode *left;
    struct tnode *right;
};

struct tnode* talloc(int data){
    struct tnode* node = malloc(sizeof(struct tnode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct tnode* add(struct tnode *root, int data){
    struct tnode* node;
    if(root == NULL){
        node = talloc(data);
        return node;
    }
    else if (root->data < data){
        root->right=add(root->right, data);
    }else{
        root->left= add(root->left, data);
    }
    return root;
}

void preorder(struct tnode *root){
    if(root!=NULL){
        printf("%d \n", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct tnode* root){
    if (root!= NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d \n", root->data);
    }
}

void deltree(struct tnode *root){
    if (root!= NULL){
        deltree(root->left);
        deltree(root->right);
        free(root);
    }
}

int main(){
    struct tnode *root = NULL;
    root = add(root, 10);
    root = add(root, 5);
    root = add(root, 15);
    root = add(root, 3);
    root = add(root, 7);
    root = add(root, 12);
    root = add(root, 18);
    printf("Preorder: \n");
    preorder(root);
    printf("Postorder: \n");
    postorder(root);
    deltree(root);
    return 0;
}