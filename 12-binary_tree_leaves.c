#include "binary_trees.h"

/**
 * binary_tree_leaves - calculate number of leafs of a tree.
 * @tree: node binary tree's root
 * Return: number of leaves or NULL if failure
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
