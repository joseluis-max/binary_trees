#include "binary_trees.h"

/**
 * binary_tree_is_root - check if a node is a root
 * @node: node for check
 * Return: 1 if is a root, otherwise 0.
 */
int binary_tree_is_root(binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
