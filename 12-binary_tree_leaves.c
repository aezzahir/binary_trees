#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: returns the count
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0; 
	if (tree == NULL)
		return (0);
	if (tree->left == NULL || tree->right == NULL)
	{
		count++;
		return (count);
	}
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
