#include "binary_trees.h"

/**
 * binary_tree_sibling - find a sibling
 * @node: node is a pointer to the node to find the sibling
 * Return: pointer to sinbling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == NULL || node->parent->right == NULL)
		return  (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}

/**
 * binary_tree_uncle - finds the uncle node
 * @node: node is a pointer to the node to find the uncle
 * Return: pointer to the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
/**
 * binary_tree_is_complete - check if a tree is complete
 * @tree: node binary tree root
 * Return: 1 or 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	binary_tree_t *uncle = NULL;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right == NULL)
	{
		if (tree->parent->right == tree)
		{
			uncle = binary_tree_uncle(tree->left);
			if (uncle->left != NULL && uncle->right != NULL)
				return (1);
			return (0);
		}
		else
		{
			uncle = binary_tree_uncle(tree->left);
			if (uncle->left != NULL && uncle->right != NULL)
				return (0);
			return (1);
		}
		return (1);
	}
	if (tree->left == NULL && tree->right != NULL)
		return (0);
	return (binary_tree_is_complete(tree->left) &&
				binary_tree_is_complete(tree->right));
}
