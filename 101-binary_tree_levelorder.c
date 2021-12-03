#include "binary_trees.h"

/**
 * binary_tree_levelorder - binary_tree level-order traverse
 * @tree: node binary_tree root
 * @func: print node function
 */
void binary_tree_levelorder(binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL || func != NULL)
	{
		if (tree->parent == NULL)
			func(tree->n);
		if (tree->left == NULL)
			return;
		func(tree->left->n);
		if (tree->right == NULL)
			return;
		func(tree->right->n);
		binary_tree_levelorder(tree->left, func);
		binary_tree_levelorder(tree->right, func);
	}
}
