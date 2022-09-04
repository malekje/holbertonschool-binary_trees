#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree with post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: nothing
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return -1;
    else
    {
        int lDepth = binary_tree_height(tree->left);
        int rDepth = binary_tree_height(tree->right);
        if (lDepth > rDepth)
            return (lDepth + 1);
        else
            return (rDepth + 1);
    }
}
