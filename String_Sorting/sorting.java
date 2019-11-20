class sort{
    String[] myArray;
    public sort(String[] myArray){
        this.myArray=myArray;
        sortArray();
        show();
    }
    public int checkCharacter(char a,char b){
        int valueA=a;
        int valueB=b;
        if(valueA>valueB)
        return 1;
        
        return 0;
    }

    /*
    0 : No swapping
    1 : Swapping
    2 : All characters same till the length of smaller string
    */

    public int compare(String str1, String str2){
        int returnValue=2;  //all characters
        for(int i=0;i<str1.length() && i<str2.length();i++){
            if(str1.charAt(i)!=str2.charAt(i)){
                returnValue=checkCharacter(str1.charAt(i),str2.charAt(i));
                break;
            }
        } 
        if(returnValue==2 && str1.length()>str2.length()){
            returnValue=1;
        }
        System.out.println(returnValue);
        return returnValue;
    }
    public void sortArray(){
        String temp;
        for(int i=0;i<myArray.length;i++){
            for(int j=i+1;j<myArray.length;j++){
                if(compare(myArray[i],myArray[j])==1){  //1 //Swap i>j
                    temp=myArray[i];
                    myArray[i]=myArray[j];
                    myArray[j]=temp;
                }
            }
        }
    }
    public void show(){
        for(int i=0;i<myArray.length;i++){
            System.out.println(myArray[i]);
        }
    } 
}
class Driver{
    public static void main(String args[]){
        String []array={"PARTYANIMAL","WORD","CODER","ANIMAL","PARTY","CODING"};
        sort A=new sort(array);
    }
}