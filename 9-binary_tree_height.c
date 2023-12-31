#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * max - returns the maximum of two numbers
 * @a: the first number
 * @b: the second number
 * Return: returns the maximum of two numbers
 */
size_t max(size_t a, size_t b)
{
	return ((a > b) ? a : b);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: returns the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left;
	size_t height_right;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
	{
		return (0);
	}

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return (max(height_left, height_right) + 1);
}
