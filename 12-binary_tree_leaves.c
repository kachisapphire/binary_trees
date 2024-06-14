#include "binary_trees.h"
/**
 * binary_tree_leaves - function to cpunt the number of leaves
 * @tree: pointer to root of tree
 * Return: leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves, left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);
	leaves = left + right;
	return (leaves);
}
