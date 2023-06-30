//
// Created by Konstantin on 25/06/2023.
//
#include <iostream>
#include <cstring>

int main(int argc,char* argv[]){
    if(argc!=2){
        std::cout << "Usage: dogsay.exe text";
        return 0;
    }

    int count=2;
    std::cout <<" __";

    if(std::strlen(argv[1])<=15) {
        for(int i=0;i<std::strlen(argv[1]);++i){
            ++count;
            std::cout << "_";
        }
        std::cout << "\n< " << argv[1] << " >\n";
    }else{
        count=17;
        std::cout <<"_______________";
        for(int i=0;i<std::strlen(argv[1]);i+=15){
            char text[16]="";
            if(i==0){
                strncpy(text,argv[1],15);
                std::cout << "\n/ "<<text<<" \\\n";
                continue;
            }
            strncpy(text,argv[1]+i,15);
            if(i+15>=std::strlen(argv[1])){
                std::cout<<"\\ "<<text;
                for(int s=0;s<15-std::strlen(text);++s){
                    std::cout << " ";
                }
                std::cout <<" /\n";
                continue;
            }
            std::cout <<"| "<<text<<" |\n";
        }
    }

    std::cout <<" ";
    for (int i = 0; i < count; ++i)
        std::cout << "-";


    std::cout << "\n";
    std::cout <<"      \\      _^__^                      .-.\n"
                "       \\   _0     |                    / /\n"
                "          (___     \\__________________/ /\n"
                "              \\_  _  ____________  _  __|\n"
                "                | || |            | || |\n"
                "               (__|__|           (__|__|\n";
}