#include "binary_trees.h"

/**
 * binary_tree_leaves - calculate number of leafs of a tree.
 * @tree: node binary tree's root
 * Return: number of leaves or NULL if failure
 */
size_t binary_tree_leaves(binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	size_t left = binary_tree_leaves(tree->left);
	size_t right = binary_tree_leaves(tree->right);

	return (left + right);
}
