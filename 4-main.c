#include "binary_trees.h"

/**
 * main - test for 4-binary_tree_is_leaf.c
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	binary_tree_t *root;
	int ret;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_print(root);

	ret = binary_tree_is_leaf(root);
	printf("Is %d a leaf: %d\n", root->n, ret);

	ret = binary_tree_is_leaf(root->right);
	printf("Is %d a leaf: %d\n", root->right->n, ret);

	ret = binary_tree_is_leaf(root->right->right);
	printf("Is %d a leaf: %d\n", root->right->right->n, ret);

	ret = binary_tree_is_leaf(root->left);
	printf("Is %d a leaf: %d\n", root->left->n, ret);

	ret = binary_tree_is_leaf(root->left->right);
	printf("Is %d a leaf: %d\n", root->left->right->n, ret);

	return (0);
}
