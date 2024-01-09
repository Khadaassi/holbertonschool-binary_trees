#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * crée un nœud d'arbre binaire
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* allocate memory for new node */
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	/* assign data to this node */
	new_node->n = value;

	/* initialize left and right children as NULL */
	new_node->left = NULL;
	new_node->right = NULL;

	/* assign parent to new node */
	new_node->parent = parent;

	return (new_node);
}
