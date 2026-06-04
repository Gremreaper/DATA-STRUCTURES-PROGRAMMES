#include<iostream>
using namespace std;

class TrieNode{
    public:

    char data;
    TrieNode* children[26];

    bool isTerminal;

    TrieNode(char ch)
    {
       data=ch;
       for(int i=0;i<26;i++)
       {
        //at start all children are null
        children[i]=NULL;
       }

       isTerminal=false;//initially
    }
};

class Trie{
    public:
    TrieNode *root;
     
    Trie()
    {
        //constructor created
        root=new TrieNode('\0');
    }
     //insertion in a Trie
    void insertUtil(TrieNode* root,string word){
       //recursion base case

       if(word.length()==0)
       {
        root->isTerminal=true;
        return;
       }

       //assumption is word will be in CAPS(capital form)

       int index=word[0]-'A';

       TrieNode *child;

       //present
       if(root->children[index]!=NULL)
       {
        child=root->children[index];
       }else{
        child=new TrieNode(word[0]);
        root->children[index]=child;
       }

       insertUtil(child,word.substr(1));
    }

    void insertword(string word)
    { 
        insertUtil(root,word);
    }


    bool searchUtil(TrieNode *root,string word)
    {
        if(word.length()==0)
          {
            return root->isTerminal;
          }

          int index=word[0]-'A';
          TrieNode *child;
          if(root->children[index]!=NULL)
          {
             child=root->children[index];
          }else{
            return false;
          }

          return searchUtil(child,word.substr(1));
    }
  
  bool searchword(string word)
  {
    return searchUtil(root,word);
  }

  void remove(string word)
  {
    if(word.length()==0)
    {
       root->isTerminal=false;
       return;
    }

    remove(word.substr(1));
  }
};

int main()
{
    Trie *t=new Trie();
     t->insertword("ABCD");
     t->insertword("JACK");
     t->insertword("TIME");


     cout<<"Present or not:"<<t->searchword("JAC")<<endl;
     
     cout<<"Present or not:"<<t->searchword("TIME")<<endl;

     cout<<"Present or not:"<<t->searchword("ABCDE")<<endl;
    
     cout<<"Present or not:"<<t->searchword("JACK")<<endl;


     t->remove("ABCD");

     cout<<"Present or not:"<<t->searchword("ABCD")<<endl;
    

}

