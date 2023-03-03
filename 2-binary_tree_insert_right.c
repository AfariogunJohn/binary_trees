#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a nde as the right-child of another
 * @parent: pointer to the node to insert the right child in
 * @value: value to be inserted
 * Return: returns pointer to the created node else 0 if NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = NULL;

	if (parent->right)
		(parent->right)->parent = new;
	new->right = parent->right;
	parent->right = new;

	return (new);
}
