#include "binary_trees.h"

/**
 * binary_tree_size - calculate binary tree's size
 * @tree: pointer node binatry tree's root
 * Return: size binary tree or NULL on failure
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_size(tree->left);
	right = binary_tree_size(tree->right);

	return (left + right + 1);
}
