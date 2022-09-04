#include "binary_trees.h"

/**
 * binary_tree_is_full - check if tree is full or not
 * @tree: pointer to the root node of the tree to traverse
 * Return: 0 if full 1 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
