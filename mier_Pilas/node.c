

Node* createNode(int dato){
    //El casteo no puede ir 
    Node* nuevo = (Node*)calloc(sizeof(Node*));

    if (nuevo == NULL){
        printf("No debería de estar pasando este error, \nFalló reserva en memoria");
        return NULL;
    }
    nuevo->content = dato;
    nuevo->sig = NULL;
    return nuevo;
}

//Verificar el espacio y si esxiste



/**
Pasos para crear un nodo
1. Rerservar un espacio en c


*/