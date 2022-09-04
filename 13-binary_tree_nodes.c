#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes
 * @tree: pointer to the root node of the tree to traverse
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
		return (0);
	if (tree != NULL)
	{
		if (tree->left || tree->right)
		{
			count++;
		}
		count += binary_tree_nodes(tree->left);
		count += binary_tree_nodes(tree->right);
	}
	return (count);
}
