#include "binary_trees.h"

/**
 * binary_tree_delete - delete a binary tree.
 * @tree: node rood of a binary tree
 * Return: NULL
 * Description: Write a function that deletes an entire binary tree
 * Prototype: void binary_tree_delete(binary_tree_t *tree);
 * Where tree is a pointer to the root node of the tree to delete
 * If tree is NULL, do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
    if (tree == NULL)
        return;
    binary_tree_delete(tree->left);
    binary_tree_delete(tree->right);
    free(tree);
}