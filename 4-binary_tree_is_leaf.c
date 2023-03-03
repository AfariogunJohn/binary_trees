#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node has not NULL links
 * @node: node
 * Return: 1 if node else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL && node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
