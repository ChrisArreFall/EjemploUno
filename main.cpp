#include <iostream>
#include <thread>
using namespace std;
// First example:
void thread1() {
    std::cout << " Im thread 1" << std::endl;
}
void thread2() {
    std::cout << " Im thread 2" << std::endl;
}

int main() {
    int i;
    int veces;
    int c = 0;
    cout << "si se quiere usar el primer thread digite 1\n";
    cout << "si se quiere usar el segundo digite 2\n";
    cout << "si se quiere usar los 2 digite cualquier cosa\n";
    std::cin >> i;
    cout << "cuantes veces quiere repetir?";
    std::cin >> veces;
    if(i==1){
        while(c<veces){
            std::thread t1(thread1);
            t1.join();
            c++;
            cout << "llego aqui " << c;
        }
        //c=0;
    }
    else if(i==2){
        while(c<veces){
            std::thread t2(thread2);
            t2.join();
            c++;

        }
        //c=0;

    }
    else {
        while (c < veces) {
            std::thread t1(thread1);
            t1.join();
            std::thread t2(thread2);
            t2.join();
            c++;
        }
        //c = 0;

    }
    return 0;
}

