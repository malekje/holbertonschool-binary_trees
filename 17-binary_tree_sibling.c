#include "binary_trees.h"

/**
 * binary_tree_sibling - sibilings
 * @node: pointer to the root node of the tree to traverse
 * Return: parent's left node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	return (node->parent->left);
}
