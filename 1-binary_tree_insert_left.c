#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node in left child of a parent node
 * @parent: parent node for insert the new node
 * @value: value new node
 * Return: new node created pointer
 * Description: Where parent is a pointer to the node to
 * insert the left-child in
 * And value is the value to store in the new node
 * Your function must return a pointer to the created node,
 * or NULL on failure or if parent is NULL
 * If parent already has a left-child,
 * the new node must take its place,
 * and the old left-child must be set as
 * the left-child of the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
		new_node->parent = parent;
		new_node->left = parent->left;
	}
	parent->left = new_node;

	return (new_node);
}
