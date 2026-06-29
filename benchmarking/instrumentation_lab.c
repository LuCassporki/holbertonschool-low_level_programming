#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
    *state = (*state * 1103515245u) + 12345u;
    return *state;
}

static void build_dataset(void)
{
    unsigned int state;
    int i;

    state = SEED_VALUE;

    for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
    int i;
    int v;

    for (i = 0; i < DATASET_SIZE; i++)
    {
        v = dataset[i];
        v = (v * 3) + (v / 7) - (v % 11);
        if (v < 0)
            v = -v;
        dataset[i] = v;
    }
}

static unsigned long reduce_checksum(void)
{
    unsigned long sum;
    int i;

    sum = 0;
    for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

    return sum;
}

int main(void)
{
    unsigned long checksum;

    /* Students must add clock-based timing and print required lines. */
	/* 1. TU AJOUTES TES VARIABLES DE TEMPS ICI (Norme C89 oblige à les mettre en haut) */
    clock_t start_total, end_total;
    clock_t start_phase, end_phase;
    double temps_build, temps_process, temps_reduce, temps_total;

    /* 2. TU LANCES LE CHRONO TOTAL */
    start_total = clock();

    /* 3. TU ENTOURES LA PREMIÈRE FONCTION */
    start_phase = clock();
    build_dataset();
    end_phase = clock();
    temps_build = (double)(end_phase - start_phase) / (double)CLOCKS_PER_SEC;

    /* 4. TU ENTOURES LA DEUXIÈME FONCTION */
    start_phase = clock();
    process_dataset();
    end_phase = clock();
    temps_process = (double)(end_phase - start_phase) / (double)CLOCKS_PER_SEC;

    /* 5. TU ENTOURES LA TROISIÈME FONCTION */
    start_phase = clock();
    checksum = reduce_checksum();
    end_phase = clock();
    temps_reduce = (double)(end_phase - start_phase) / (double)CLOCKS_PER_SEC;

    /* 6. TU ARRÊTES LE CHRONO TOTAL */
    end_total = clock();
    temps_total = (double)(end_total - start_total) / (double)CLOCKS_PER_SEC;

    build_dataset();
    process_dataset();
    checksum = reduce_checksum();

    if (checksum == 0ul)
        printf("impossible\n");

    /* Required output (exact format, no extra lines):
     * TOTAL seconds: <float>
     * BUILD_DATA seconds: <float>
     * PROCESS seconds: <float>
     * REDUCE seconds: <float>
     */

	/* 7. TU AFFICHES LE RÉSULTAT STRICTEMENT COMME DEMANDÉ */
    printf("TOTAL seconds: %.6f\n", temps_total);
    printf("BUILD_DATA seconds: %.6f\n", temps_build);
    printf("PROCESS seconds: %.6f\n", temps_process);
    printf("REDUCE seconds: %.6f\n", temps_reduce);
    return 0;
}
