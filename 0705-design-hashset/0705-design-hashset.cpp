class Node{
 public:
  int key;
  Node * next=NULL;
  Node(int key){
    this->key=key;
    this->next=NULL;
  }
  Node(){};
};
class MyHashSet {
  Node *head=NULL;
public:
    MyHashSet() {
        // head=new Node();
    }
    
    void add(int key) {
        if(head==NULL)head=new Node(key);
      else{
        Node *ptr=head,* prev=head;
        while(ptr!=NULL){
          if(ptr->key==key)return;
          prev=ptr;
          ptr=ptr->next;
        }
        prev->next=new Node(key);
      }
    }
    
    void remove(int key) {
       // print(head);
      // cout<<"remove called...."<<endl;
          Node * ptr=head,*prev=NULL;
          while(ptr!=NULL){
            // cout<<"val->"<<ptr->key<<endl;
            if(ptr->key==key){
              // cout<<"matched.."<<endl;
              if(ptr==head){
                // cout<<"head matched.."<<endl;
                head=head->next;
                return; 
              }
              prev->next=ptr->next;
              // cout<<prev->next->key<<endl;
              // print(head);
              break;
            }
            prev=ptr;
            ptr=ptr->next;
          }
    }
    
    bool contains(int key) {
      Node * ptr=head;
      while(ptr!=NULL){
        if(ptr->key==key)return true;
        ptr=ptr->next;
      }
      return false;
    }
  void print(Node * curr){
    cout<<"print start"<<endl;
    while(curr!=NULL){
      cout<<curr->key<<"->";
      curr=curr->next;
    }
    cout<<endl;
  }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */