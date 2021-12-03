#include "binary_trees.h"

/**
 * binary_tree_rotate_right - right-rotation on a binary tree
 * @tree: pointer to the node binary tree root
 * Return: pointer the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *copy = NULL;

	if (tree == NULL)
		return (NULL);
	copy = tree->left->right;
	tree->left->right = tree;
	tree = tree->left;
	tree->right->parent = tree;
	tree->parent = NULL;
	tree->right->left = copy;
	if (copy != NULL)
		tree->right->left->parent = tree->right;

	return (tree);
}
