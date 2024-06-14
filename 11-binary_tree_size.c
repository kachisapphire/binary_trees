#include "binary_trees.h"
/**
 * binary_tree_size - function to check for tree size
 * @tree: pointer to the root node of tree
 * Return: size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size, left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);
	size = 1 + left + right;
	return (size);
}
