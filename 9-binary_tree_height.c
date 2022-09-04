#include "binary_trees.h"

/**
 * binary_tree_height - height of the tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int lDepth = binary_tree_height(tree->left);
	int rDepth = binary_tree_height(tree->right);

	if (lDepth > rDepth)
	{
		return (lDepth + 2);
	}
	return (rDepth + 2);
}
