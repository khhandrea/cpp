
    graph = new bool*[N];
    for(i=0; i<N; i++) {
        graph[i] = new bool[N];
    }

    for(i=0; i<M; i++) {
        scanf("%hd %hd", &from, &to);
        graph[from][to] = 1;
        graph[to][from] = 1;
    }

    for(i=0; i<N; i++) {
        for(j=0; j<N; j++) {
            printf("%hd ",graph[i][j]);
        }
        printf("\n");
    }