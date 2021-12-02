#include "binary_trees.h"

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

	depth = helper_recursion(tree);
	return (helper_recursion(tree, depth, level));
}
