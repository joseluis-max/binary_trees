#include "binary_trees.h"

/**
 * binary_tree_nodes - count node with at least one child
 * @tree: node binary tree's root
 * Return: number of nodes or NULL if failure
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
