#include <stdio.h>
#include <string.h>

int main() {
    int N, M;

    while (scanf("%d %d", &N, &M) && (N != 0 || M != 0)) {
        char servidores[N][100][21];
        int num_apps_servidor[N];

        for (int i = 0; i < N; i++) {
            int Qi;
            scanf("%d", &Qi);
            num_apps_servidor[i] = Qi;
            for (int j = 0; j < Qi; j++) {
                scanf("%s", servidores[i][j]);
            }
        }

        char clientes[M][100][21];
        int num_apps_cliente[M];

        for (int i = 0; i < M; i++) {
            int Pj;
            scanf("%d", &Pj);
            num_apps_cliente[i] = Pj;
            for (int j = 0; j < Pj; j++) {
                scanf("%s", clientes[i][j]);
            }
        }

        int total_conexoes = 0;

        for (int i = 0; i < M; i++) {
            int conexoes_servidor[N];
            memset(conexoes_servidor, 0, sizeof(conexoes_servidor));

            for (int j = 0; j < num_apps_cliente[i]; j++) {
                for (int k = 0; k < N; k++) {
                    for (int l = 0; l < num_apps_servidor[k]; l++) {
                        if (strcmp(clientes[i][j], servidores[k][l]) == 0) {
                            conexoes_servidor[k] = 1;
                        }
                    }
                }
            }

            for (int k = 0; k < N; k++) {
                total_conexoes += conexoes_servidor[k];
            }
        }

        printf("%d\n", total_conexoes);
    }

    return 0;
}
