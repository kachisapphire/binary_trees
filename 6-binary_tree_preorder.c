#include "binary_trees.h"
/**
 * binary_tree_preorder - function to execute
 * @tree: pointer to the root of the tree to transverse
 * @func: a pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
