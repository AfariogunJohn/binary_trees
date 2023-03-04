#include "binary_trees.h"
/**
 * binary_tree_leaves - returns the size of a binary tree leaf
 * @tree: pointer to the tree
 * Return: size of the tree else 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right_count = 0, left_count = 0;

	if (!tree)
		return (0);

	right_count = binary_tree_leaves(tree->right);
	left_count = binary_tree_leaves(tree->left);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	return (right_count + left_count);
}
