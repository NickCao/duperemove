#ifndef	__FIND_DUPES_H__
#define	__FIND_DUPES_H__

/* from duperemove.c */
extern int stdout_is_tty;
extern unsigned int blocksize;

int find_all_dupes(struct hash_tree *tree, struct results_tree *res);
int find_additional_dedupe(struct results_tree *extents);

#endif	/* __FIND_DUPES_H__ */
