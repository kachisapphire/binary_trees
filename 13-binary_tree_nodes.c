#include "binary_trees.h"
/**
 * binary_tree_nodes - function to count node
 * @tree: pointer to the root node of the tree
 * Return: nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_withchild = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
		nodes_withchild += 1;
	nodes_withchild += binary_tree_nodes(tree->left);
	nodes_withchild += binary_tree_nodes(tree->right);
	return (nodes_withchild);
}
