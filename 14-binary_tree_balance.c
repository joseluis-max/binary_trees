#include "binary_trees.h"

/**
 * height_nodes - Counter the height of a tree but in number of nodes
 * @tree:node binary tree's root
 * Return: size_t height tree in nodes
 */
size_t height_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left = height_nodes(tree->left);
	size_t right = height_nodes(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
/**
 * binary_tree_balance - calculate binary tree's balance
 * @tree:node binary tree's root
 * Return: balance binary tree (size_t)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);
	left = height_nodes(tree->left);
	right = height_nodes(tree->right);
	return (left - right);
}
