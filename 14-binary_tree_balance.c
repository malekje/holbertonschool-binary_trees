#include "binary_trees.h"
/**
 * binary_tree_height - height of the tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lDepth, rDepth = 0;

	if (tree == NULL)
		return (0);
	if (!tree->right && !tree->left)
		return (0);
	lDepth = binary_tree_height(tree->left);
	rDepth = binary_tree_height(tree->right);

	if (lDepth >= rDepth)
	{
		return (lDepth + 1);
	}
	return (rDepth + 1);
}

/**
 * binary_tree_balance - balance of the tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: tree balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
