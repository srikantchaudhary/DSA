import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Node{
    protected int data; 
    protected Node link;
    public Node(){
        link=null;
        data=0;
    }
    public Node(int d,Node n){
        data=d;
        link=n;
    }
        public void setLink(Node n){
            link=n;
    }
    public void setData(int d){
        data=d;
    }
    public int getData(){
        return data;
    }
}
class linked{
    protected Node start;
    protected Node end;
    public int size;
    public linked(){
        start=null;
        end=null;
        size=0;
    }
    public boolean isEmpty(){
        return start==null;
    }
    public void insertAtStart(int val){
        Node nptr=new Node(val,Null);
        size++;
        if(start==null){
            start=nptr;
            end=start;
        }else{
            notr.setLink(start);
            start=nptr;
        }
    }
}

public class linkedList {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);

    }
}
