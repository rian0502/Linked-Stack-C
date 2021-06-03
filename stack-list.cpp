/*Tugas Kelompok Stack List
Nama-anggota:
1. Bagus Tito 
2. Muhammad Febrian H   
3. Nur Mita Utami

Link Github: .....
*/
#include <bits/stdc++.h>

using namespace std;

class Lingkaran{
public:
    double radius;
    Lingkaran *next;

    Lingkaran(){
        this->radius=1;
    }
    Lingkaran(double radius){
        this->radius = radius;
    }
    Lingkaran(Lingkaran &lingkaran) {
        this->radius = lingkaran.radius;
    }
    double getLuas(){
        return M_PI * radius * radius;
    }
    double getKeliling(){
        return 2 * M_PI * radius;
    }
};

class ListStack{
public:
    Lingkaran *top;
    ListStack(){
        top=NULL;
    }
    bool isEmpty(){
        if(top == NULL){
            return 1;}
        else{
            return 0;
            }
    }

    void push(Lingkaran *item){
        item->next = NULL;
        if (isEmpty()){
            item = top;
        } else{
            item->next = top;
            top = item;
        }
    }

    void push(double radius){
        Lingkaran *item;
        item = new Lingkaran(radius);
        item->next = NULL;
        if (isEmpty()){
           top = item;
        } else {
            item -> next=top;
            top = item;
        }
    }

    Lingkaran *pop(){
        Lingkaran *del;
        if (isEmpty()) {
            cout<<"Stack Kosong"<<endl;
            return NULL;
        }else{
            del = top;
            top = top->next;
            return del;
            delete del;
            return NULL;
        }
    }
};

int main(){
    ListStack stack;
    Lingkaran l1(10);
    stack.push(5.5);
    stack.push(15);
    stack.push(20);
    stack.push(35);
    cout<<stack.pop()->radius<<endl;
    cout<<stack.pop()->radius<<endl;
    cout<<stack.pop()->radius<<endl;
    cout<<stack.pop()->radius<<endl;
    cout<<stack.pop()->radius<<endl;
    return 0;
}
