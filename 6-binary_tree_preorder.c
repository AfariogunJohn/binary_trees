#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree in preorder traversal
 * @tree: pointer to the root of the tree to traverse
 * @func: pointe rto a function call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
