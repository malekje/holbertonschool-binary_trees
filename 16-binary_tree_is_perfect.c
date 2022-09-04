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
	if (tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - perfect tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	if (binary_tree_depth(tree->left) == binary_tree_depth(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}
