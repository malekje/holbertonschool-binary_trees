#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	return;

	else
	{
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
        func(tree->n);
	}
}
