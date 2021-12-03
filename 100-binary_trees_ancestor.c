#include "binary_trees.h"

/**
 * binary_tree_depth - calculate node depth in a binary tree
 * @tree: 10-binary_tree_depth.c
 * Return: depth measure node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent);
	return (depth + 1);
}
/**
 * binary_tree_ancestor - finds the LCA of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: LCA of first and second nodes or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	size_t dfirst = 0;
	size_t dsecond = 0;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first->left == second || first->right == second)
		return ((binary_tree_t *)first);
	if (second->left == first || second->right == first)
		return ((binary_tree_t *)second);

	dfirst = binary_tree_depth(first);
	dsecond = binary_tree_depth(second);

	while (dsecond < dfirst)
	{
		first = first->parent;
		dfirst--;
	}
	while (dfirst < dsecond)
	{
		second = second->parent;
		dsecond--;
	}
	if (first == second)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);
	return (binary_trees_ancestor(first->parent, second->parent));
}
