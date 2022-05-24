

template<typename T>
class Vector{
    //Data Members
    T *arr;
    int cs;
    int ms;

public:

    Vector(int max_size=1){
        cs = 0;
        ms = max_size;
        arr = new T[ms];

    }
    //Methods
 
void push_back(T d){
    if(cs==ms){
        //create new array and double the size
        T *oldarr = arr;
        ms = 2*ms;
        arr = new T[ms];
        //copy the older elements
        for(int i=0;i<cs;i++){
            arr[i]=oldarr[i];
        }
        //delete old array
        delete [] oldarr;

    }
    arr[cs]=d;
    cs++;

}

void pop_back(){
    if(cs>=0){
    cs--;
    } 
}

//function to get front and back element 
T front()const {
    return arr[0];
}

T back() const{
    return arr[cs-1];
}

T at(int i) const{
    return arr[i];
}

int size() const{
    return cs;
}

int capacity(){
    return ms;
}

T operator[](const int i)const{
    return arr[i];
}

    

};