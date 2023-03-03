#include "binary_trees.h"
/**
 * binary_tree_postorder - goes through a binary tree in postorder traversal
 * @tree: pointer to the root of the tree to traverse
 * @func: pointe rto a function call for each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
