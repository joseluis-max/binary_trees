#include "binary_trees.h"

/**
 *isgreater - check the more greater number in a tree
 * @tree: node binary tree root
 * @value: value for compare
 * Return: 1 o 0
 */
int isgreater(binary_tree_t *tree, int value)
{
	if (tree == NULL)
		return (1);
	if (tree->n > value &&
		isgreater(tree->left, value) &&
		isgreater(tree->right, value))
		return (1);
	return (0);
}
/**
 * islesser - check the more lesser number in a tree
 * @tree: node binary tree root
 * @value: value for compare
 * Return: 1 o 0
 */
int islesser(binary_tree_t *tree, int value)
{
	if (tree == NULL)
		return (1);
	if (tree->n <= value &&
		islesser(tree->left, value) &&
		islesser(tree->right, value))
		return (1);
	return (0);
}
/**
 * binary_tree_is_bst - check is a binary tree is a valid BST
 * @tree: pointer to the root node of the tree to check
 * Return: 1 or 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	if (islesser(tree->left, tree->n) &&
		isgreater(tree->right, tree->n) &&
		binary_tree_is_bst(tree->left) &&
		binary_tree_is_bst(tree->right))
		return (1);
	return (0);
}
