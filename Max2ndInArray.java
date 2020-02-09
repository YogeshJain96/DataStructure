public class Max2ndInArray{

     public static void main(String []args){
        System.out.println("Hello World");
        int ar[]={1,2,1,1,1,1,1,3,3,3,4};
        for(int i:ar)
            System.out.print(i);
        int max=ar[0];
        for(int i=0;i<ar.length;i++){
            if(ar[i]>max)
                max=ar[i];
        }
        System.out.println("max="+max);
        int max2=ar[0];
        int index=0;
        for(int i=0;i<ar.length;i++){
            if(ar[i]>max2 && ar[i]!=max)
                {
                    max2=ar[i];
                    index=i;
                }
        }
        System.out.println("max2="+max2+"index="+index);
        
     }
}
