#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree using in-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * Return: nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	/* first recur on left child */
	binary_tree_inorder(tree->left, func);
	/* then print the data of node */
	func(tree->n);
	/* now recur on right child */
	binary_tree_inorder(tree->right, func);
}
