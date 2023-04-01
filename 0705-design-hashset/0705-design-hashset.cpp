class Node
{
    public:
        int key;
    Node *next = NULL;
    Node(int key)
    {
        this->key = key;
        this->next = NULL;
    }
    Node() {};
};
class MyHashSet
{
    Node *head = NULL;
    public:
        MyHashSet() {}

    void add(int key)
    {
        if (head == NULL) head = new Node(key);
        else
        {
            Node *ptr = head, *prev = head;
            while (ptr != NULL)
            {
                if (ptr->key == key) return;
                prev = ptr;
                ptr = ptr->next;
            }
            prev->next = new Node(key);
        }
    }

    void remove(int key)
    {
        Node *ptr = head, *prev = NULL;
        while (ptr != NULL)
        {
            if (ptr->key == key)
            {
                if (ptr == head)
                {
                    head = head->next;
                    return;
                }
                prev->next = ptr->next;
                break;
            }
            prev = ptr;
            ptr = ptr->next;
        }
    }

    bool contains(int key)
    {
        Node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->key == key) return true;
            ptr = ptr->next;
        }
        return false;
    }
};

/**
 *Your MyHashSet object will be instantiated and called as such:
 *MyHashSet* obj = new MyHashSet();
 *obj->add(key);
 *obj->remove(key);
 *bool param_3 = obj->contains(key);
 */