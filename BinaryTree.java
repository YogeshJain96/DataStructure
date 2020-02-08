class Node{
    Node left,right;
    int data;
    public Node(int d){
        data=d;
        left=right=null;
    }
}
public class BinaryTree {
    Node root;
    BinaryTree(){
        root=null;
    }
    BinaryTree(int k){
        root=new Node(k);
    }
    void Insert(Node n){
        if(root==null){
            root=n;
            System.out.println("root"+n.data);
        }
        else{
            Node current=root;
        while (current != null)
            {
            if(n.data<current.data){
                //insert  left
               
                if(current.left==null){
                System.out.println("Left"+n.data);
                    current.left=n;
                    return;
                }
                else{
                    current=current.left;
                }
            }
            else{
                //insert right
                
                if(current.right==null){
                System.out.println("right"+n.data);
                    current.right=n;
                    return;
                }
                else{
                    current=current.right;
                }
            }
           }
        }

    }
    void mirror() 
    { 
        root = mirror(root); 
    } 
  
    Node mirror(Node node) 
    { 
        if (node == null) 
            return node; 
  
        /* do the subtrees */
        Node left = mirror(node.left); 
        Node right = mirror(node.right); 
  
        /* swap the left and right pointers */
        node.left = right; 
        node.right = left; 
  
        return node; 
    }

    void printPostorder(Node node) 
    { 
        if (node == null) 
            return; 
        printPostorder(node.left);
        printPostorder(node.right); 
        System.out.print(node.data + " "); 
    } 
  
    void printInorder(Node node) 
    { 
        if (node == null) 
            return; 
        printInorder(node.left); 
        System.out.print(node.data + " "); 
        printInorder(node.right); 
    } 
  
    
    void printPreorder(Node node) 
    { 
        if (node == null) 
            return; 
        System.out.print(node.data + " "); 
        printPreorder(node.left); 
        printPreorder(node.right); 
    } 
  
    void printPostorder()  {     printPostorder(root);  } 
    void printInorder()    {     printInorder(root);   } 
    void printPreorder()   {     printPreorder(root);  }  
    public static void main(String[] args) {  
        BinaryTree bt=new BinaryTree();
        int ar[]={4,2,1,3,5,7,8,0};
        for(int i=0;i<ar.length;i++)
            bt.Insert(new Node(ar[i]));


        System.out.println("Preorder traversal of binary tree is "); 
        bt.printPreorder(); 
  
        System.out.println("\nInorder traversal of binary bt is "); 
        bt.printInorder(); 
  
        System.out.println("\nPostorder traversal of binary bt is "); 
        bt.printPostorder(); 

        System.out.println("Mirroring");
        bt.mirror();

        System.out.println("Preorder traversal of binary tree is "); 
        bt.printPreorder(); 
  
        System.out.println("\nInorder traversal of binary bt is "); 
        bt.printInorder(); 
  
        System.out.println("\nPostorder traversal of binary bt is "); 
        bt.printPostorder(); 
    }  
}  
