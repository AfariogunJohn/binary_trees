#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root
 * @node: node
 * Return: 1 if node else 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
