#include <iostream>
#include <vector>
#include <sstream>
#include <climits>

// init: aponta para o primeiro elemento do vetor
// end: aponta para uma posição depois do último elemento do vetor
// converte o vetor para texto no formato [1, 2, 3, 4]
std::string tostr(int * init, int * end) {
    std::ostringstream oss;
    oss<<"[";
    for(int *p = init; p != end; p++){
        if(p != init)oss<<", ";
        oss<< *p;
    }
    oss <<"]";
    return oss.str();
}

// converte o vetor para texto, porém ao contrário
std::string torev(int * init, int * end) {
    std::ostringstream oss;
    oss<< "[";
    for(int *p = end; p != init; ){
        --p;
        if(p != end-1) oss<<", ";
        oss<<*p;
    }
    oss <<"]";
    return oss.str();
}
// inverte os elementos do vetor inplace
void reverse(int * init, int * end) {
    if(init == end) return;
    for(int *l = init, *r = end-1; l<r; l++, --r){
        std::swap(*l, *r);
    }
}

int sum(int * init, int * end) {
    if(init == end) return 0;
    return *init +sum(init+1, end);
};

// multiplica os elementos do vetor
// retorne 1, se o vetor estiver vazio
int mult(int * init, int * end) {
    if (init == end) return 1;
    return *init * mult(init + 1, end);
};

static std::pair<int,int> __min(int* init, int* end) {
    if (init == end) return {-1, INT_MAX};  
    if (init + 1 == end) return {0, *init}; 
    auto rest = __min(init + 1, end); 
    if (*init <= rest.second) return {0, *init};  

    return {rest.first == -1 ? -1 : rest.first + 1, rest.second};
}

int min(int * init, int * end) {
    auto [pos, val] = __min(init,end);
    (void)val;
    return pos;
}
int main() {
    std::vector<int> vet;

    while (true) {
        std::string line;
        std::getline(std::cin, line);
        std::cout << "$" << line << std::endl;
        std::istringstream iss(line);
        std::vector<std::string> args;
        std::string arg;
        while (iss >> arg) {
            args.push_back(arg);
        }
        if (args[0] == "end") {
            break;
        } else if (args[0] == "read") {
            vet.clear();
            for (size_t i = 1; i < args.size(); i++) {
                vet.push_back(std::stoi(args[i]));
            }
        } else if (args[0] == "tostr") {
            auto resp = tostr(vet.data(), vet.data() + vet.size());
            std::cout << resp << std::endl;
        } else if (args[0] == "torev") {
            auto resp = torev(vet.data(), vet.data() + vet.size());
            std::cout << resp << std::endl;
        } else if (args[0] == "reverse") {
            reverse(vet.data(), vet.data() + vet.size());
        } else if (args[0] == "sum") {
            auto resp = sum(vet.data(), vet.data() + vet.size());
            std::cout << resp << std::endl;
        } else if (args[0] == "mult") {
            auto resp = mult(vet.data(), vet.data() + vet.size());
            std::cout << resp << std::endl;
        } else if (args[0] == "min") {
            auto resp = min(vet.data(), vet.data() + vet.size());
            std::cout << resp << std::endl;
        } else {
            std::cout << "Comando inválido" << std::endl;
        }
    }
}
