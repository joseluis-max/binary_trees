#include "binary_trees.h"

/**
 * binary_tree_height - calculate binary tree's height
 * @tree: node binary tree's root
 * Return: height binary tree (size_t)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL || (!tree->left && !tree->right))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
/**
 * helper_recursion - check if every leaf have the same depth
 * @tree: node binary tree's root
 * @depth: depth tree
 * @level: level for every node in the tree
 * Return: 1 or 0
 */
int helper_recursion(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (helper_recursion(tree->left, depth, level + 1) &&
			helper_recursion(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - check if a tree is perfect;
 * @tree: node binary tree's root
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth = 0;
	int level = 0;

	if (tree == NULL)
		return (0);
	depth = binary_tree_height(tree);
	return (helper_recursion(tree, depth, level));
}
