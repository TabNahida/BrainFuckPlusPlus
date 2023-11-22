#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <stack>
#include <thread>
#include <chrono>
using namespace std;

namespace BF
{

class BFVM
{
private:
    string codeline;
    vector<char> varline;
    size_t codepointer = 0;
    size_t varpointer = 0;
    stack<size_t> cyclestack;

    void archasm(char input)
    {
        switch (input)
        {
        case '>':
            varpointer++;
            break;
        case '<':
            varpointer--;
            break;
        case '+':
            varline[varpointer]++;
            break;
        case '-':
            varline[varpointer]--;
            break;
        case '.':
            cout.put(varline[varpointer]);
            break;
        case ',':
            cin.get(varline[varpointer]);
            break;
        case '[':
            if(varline[varpointer] != 0)
            {
                cyclestack.push(codepointer);
            }
            else
            {
                for(;codeline[codepointer] != ']';codepointer++);
            }
            break;
        case ']':
            codepointer = cyclestack.top();
            break;
        default:
            break;
        }
    }

public:
    BFVM(string code, size_t varsize = 1024)
    {
        codeline = code;
        varline.resize(varsize);
    }
    
    int runner()
    {
        for(;codepointer < codeline.size();codepointer++)
        {
            archasm(codeline[codepointer]);
        }
        return 0;
    }

};

}