#include "binary_trees.h"

/**
 * binary_tree_balance - Checks the balance of a binary tree
 * @tree: Pointer to the tree
 * Return: Balance of the binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left = binary_tree_height(tree->left);
	if (tree->right != NULL)
		right = binary_tree_height(tree->right);

	return (left - right);
}


/**
 * binary_tree_height - Gets the tree height in a binary tree
 * @tree: Pointer to the tree
 * Return: Height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree->left)
		left = binary_tree_height(tree->left);

	if (tree->right)
		right = binary_tree_height(tree->right);

	if (right > left)
		return (right + 1);
	return (left + 1);
}
