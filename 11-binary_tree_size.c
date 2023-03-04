#include "binary_trees.h"
/**
 * binary_tree_size - returns the size of a binary tree
 * @tree: pointer to the tree
 * Return: size of the tree else 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	if ((tree->left) || (tree->right))
	{
		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);
	}
	return (left + right + 1);
}
