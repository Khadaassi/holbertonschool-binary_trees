#include "binary_trees.h"

/**
* binary_tree_sibling - finds the sibling of a node
* trouve le frère d'un nœud
* @node: pointer to the node to find the sibling
*
* Return: pointer to the sibling node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* If node is NULL or node's parent is NULL, return NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If node is left child, return right sibling */
	if (node->parent->left == node)
		return (node->parent->right);

	/* If node is right child, return left sibling */
	return (node->parent->left);
}

/**
* binary_tree_uncle - finds the uncle of a node
* trouve l'oncle d'un nœud
* @node: pointer to the node to find the uncle
*
* Return: pointer to the uncle node
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* If node is NULL or node's parent is NULL, return NULL */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* Uncle is parent's sibling, so return it */
	return (binary_tree_sibling(node->parent));
}
