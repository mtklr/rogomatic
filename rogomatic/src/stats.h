#ifndef STATS_H_
#define STATS_H_

void clearprob(probability *p);
void addprob(probability *p, int success);
double prob(probability *p);
void parseprob(char *buf, probability *p);
void writeprob(FILE *f, probability *p);
void clearstat(statistic *s);
void addstat(statistic *s, int datum);
double mean(statistic *s);
double stdev(statistic *s);
void parsestat(char *buf, statistic *s);
void writestat(FILE *f, statistic *s);

#endif
