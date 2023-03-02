#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance of the tree or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0;
	int left = 0;
	int total = 0;

	if (tree)
	{
		left = (binary_tree_height_2(tree->left));
		right = (binary_tree_height_2(tree->right));
		total = left - right;
	}

	return (total);
}

/**
 * binary_tree_height_2 - measures the height of a binary tree
 * for a balanced tree
 * @tree: a pointer to the root node of the tree to measure the height
 * Return: height of tree or 0
 */
size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height_2(tree->left) : 1;
	right_height = tree->right ? 1 + binary_tree_height_2(tree->right) : 1;

	return (left_height > right_height ? left_height : right_height);
}
