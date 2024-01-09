#include "binary_trees.h"
/**
* binary_tree_delete - deletes an entire binary tree
* supprime un arbre binaire entier
* @tree: pointer to the root node of the tree to delete
* Return: nothing
*/
void binary_tree_delete(binary_tree_t *tree)
{
	/* If the tree is NULL, there's nothing to delete, so we return */
	if (tree == NULL)
		return;

	/* Recursively delete all nodes in the left subtree */
	binary_tree_delete(tree->left);
	/* Recursively delete all nodes in the right subtree */
	binary_tree_delete(tree->right);
	free(tree);
}
