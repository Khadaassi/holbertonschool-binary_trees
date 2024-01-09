#include "binary_trees.h"

/**
* binary_tree_preorder - goes through a binary tree using pre-order traversal
* parcourt un arbre binaire à l'aide d'un parcours de pré-ordre
* (Traversée dans l'ordre)
* @tree: pointer to the root node of the tree to traverse
* @func: pointer to a function to call for each node
*
*This function traverses a binary tree in pre-order (root, left, right)
* and applies a given function to each node.
* If tree or func is NULL, the function does nothing.
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* If tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
		return;

	/* Call the function with the current node's value */
	func(tree->n);

	/* Recursively traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* Recursively traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
