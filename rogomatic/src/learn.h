#ifndef LEARN_H_
#define LEARN_H_

typedef struct {
  int   id, creation, father, mother, dna[MAXKNOB];
  statistic score, level;
}               genotype;

void initpool (int k, int m);
void analyzepool (int full);
void setknobs (int *newid, int *knb, int *best, int *avg);
void evalknobs (int gid, int score, int level);
FILE *rogo_openlog (char *genelog);
void rogo_closelog (void);
int pickgenotype (void);
int readgenes (char *genepool);
static void parsegene (char *buf, genotype *gene);
void writegenes (char *genepool);
static void writegene (FILE *gfil, genotype *g);
static void initgene (genotype *gene);
static int compgene (genotype **a, genotype **b);
static void summgene (FILE *f, genotype *gene);
static void birth (FILE *f, genotype *gene);
static void printdna (FILE *f, genotype *gene);
static void cross (int father, int mother, int new);
static void mutate (int father, int new);
static void shift (int father, int new);
static void randompool (int m);
static int selectgene (int e1, int e2);
static int unique (int new);
static int untested (void);
static int youngest (void);
static void makeunique (int new);
static int triangle (int n);
static int badgene (int e1, int e2);

#endif
