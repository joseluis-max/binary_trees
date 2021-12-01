#include "binary_trees.h"

/**
 * binary_tree_height - calculate binary tree's height
 * @tree: node binary tree's root
 * Return: height binary tree (size_t)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL || (!tree->left && !tree->right))
		return (0);
	size_t left = binary_tree_height(tree->left);
	size_t right = binary_tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
