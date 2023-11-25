class Solution {
public:
    bool preference(char c){
        if(c=='+' || c=='-'){
            return 1;
        }
        else if(c=='*' || c=='/'){
            return 2;
        }
        else if(c=='^'){
            return 3;
        }
        return -1;
    }
    string ConvertToPostfix(string s){
        stack<char> operatorStack;
        string postfix = "";
        for(auto i:s){
            if(i>='0' && i<='9'){
                postfix+=i;
            }
            if(i=='(') {
                operatorStack.push('(');
            }
            else if(i==')'){
                while(operatorStack.top()!='('){
                    postfix+=operatorStack.top();
                    cout<<postfix<<" b"<<endl;
                    operatorStack.pop();
                }
                operatorStack.pop();
            }
            else if(i=='+' || i=='-'){
                while(!operatorStack.empty() && preference(operatorStack.top())>=preference(i) && operatorStack.top()!='('){
                    postfix+=operatorStack.top();
                    cout<<postfix<<" o"<<endl;
                    operatorStack.pop();
                }
                operatorStack.push(i);         
            }
            // if(!operatorStack.empty()) cout<<postfix<<endl;
        }
        while(!operatorStack.empty()){
            postfix+=operatorStack.top();
            operatorStack.pop();
        }
        cout<<postfix<<endl;
        return postfix;
    }
    string calculate(string s) {
        string postfix = ConvertToPostfix(s);
        return postfix;
    }
};