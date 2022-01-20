#ifndef LEARN_H_
#define LEARN_H_

typedef struct {
  int   id, creation, father, mother, dna[MAXKNOB];
  statistic score, level;
}               genotype;

void initpool(int k, int m);
void analyzepool(int full);
void setknobs(int *newid, int *knb, int *best, int *avg);
void evalknobs(int gid, int score, int level);
FILE *rogo_openlog(char *genelog);
void rogo_closelog(void);
int pickgenotype(void);
int readgenes(char *genepool);
void writegenes(char *genepool);

#endif
