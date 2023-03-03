#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: is a pointer to the parent node of the tree
 * @value: Integer value being stored in the node
 * Return: pointer to the new node or 0 if NULL
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (0);

	new->parent = parent;
	new->n = value;
	new->right = NULL;
	new->left = NULL;
	return (new);
}
