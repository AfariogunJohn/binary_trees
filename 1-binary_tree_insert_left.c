#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a nde as the left-child of another
 * @parent: pointer to the node to insert the left child in
 * @value: value to be inserted
 * Return: returns pointer to the created node else 0 if NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->right = NULL;

	if (parent->left)
		(parent->left)->parent = new;
	new->left = parent->left;
	parent->left = new;

	return (new);
}
