#include "binary_trees.h"

/**
 * binary_tree_rotate_left - left-rotation on a binary tree
 * @tree: pointer to the node binary tree root
 * Return: pointer the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *copy = NULL;

	if (tree == NULL)
		return (NULL);
	copy = tree->right->left;
	tree->right->left = tree;
	tree = tree->right;
	tree->left->parent = tree;
	tree->parent = NULL;
	tree->left->right = copy;
	if (copy != NULL)
		tree->left->right->parent = tree->left;

	return (tree);
}
