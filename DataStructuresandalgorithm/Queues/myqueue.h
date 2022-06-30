class Queue{
    int *arr;
    int cs;
    int ms;
    
    int rear;

public:
int front;
Queue(int d_size=5){
    ms=d_size;
    arr = new int[ms];
    cs=0;
    front=0;
    rear=ms-1;
}
bool full(){
    return cs==ms;
}
bool empty(){
    return cs==0;
}

void push(int data){
    if(!full()){
        //take to next index
        rear = (rear+1)%ms;
        arr[rear]=data;
        cs++;
    }

}
void pop(){
    if(!empty()){
        //take the front ptr forward 
        front = (front+1)%ms;
        cs--;
    }
}

int get_front(){
    return arr[front];
}

};