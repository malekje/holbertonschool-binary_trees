#include "binary_trees.h"

/**
 * binary_tree_depth - depth of the tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
