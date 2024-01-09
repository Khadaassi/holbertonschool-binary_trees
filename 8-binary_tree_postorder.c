#include "binary_trees.h"

/**
* binary_tree_postorder - goes through a binary tree using post-order traversal
* parcourt un arbre binaire en utilisant la traversée post-ordre
* @tree: pointer to the root node of the tree to traverse
* @func: pointer to a function to call for each node
*
* This function traverses a binary tree in post-order (left, right, root)
* and applies a given function to each node.
* If tree or func is NULL, the function does nothing.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* If tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
		return;

	/* Recursively traverse the left subtree */
	binary_tree_postorder(tree->left, func);

	/* Recursively traverse the right subtree */
	binary_tree_postorder(tree->right, func);

	/* Call the function with the current node's value */
	func(tree->n);
}
