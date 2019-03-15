# ArrayList_Multitype

Arraylist para exemplificar uma arraylist funcional que possibilita a inserção de multiplos tipos.

## Tipo da arraylist
```c
    struct line *LINE
```

## Metodos

```c

    // Inicializa LINE como Null
    LINE newLine();

    // Inicializa LINE
    LINE newLineObj(void *value, int type);
    
    // Adiciona um proximo
    LINE addLine(LINE al, LINE new);
    
    // Imprime toda a arraylist
    void printLine(LINE al);
    
    // Pega a quantia de linhas na arraylist
    int getLineSize(LINE al);
    
    // Limpa a arraylist
    LINE clearLine(LINE al);
    
    /* GET'S AND SET'S */
    int getLineSizeOf();
    int getLineType(LINE al);
    LINE setLineType(LINE al, int type);
    LINE getLineNext(LINE al);
    LINE setLineNext(LINE al, LINE next);
    void *getLineValue(LINE al);
    LINE setLineValue(LINE al, void *value);
```
