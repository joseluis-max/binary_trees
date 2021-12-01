#include "binary_trees.h"

/**
 * binary_tree_depth - calculate node depth in a binary tree
 * @tree: 10-binary_tree_depth.c
 * Return: depth measure node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	size_t depth = binary_tree_depth(tree->parent);

	return (depth + 1);
}
