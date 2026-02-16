/* An educational view of how Java selects methods in an
Inheritance hierarchy if there are multiple versions of the
same method but with different parameters, in particular 
int or float */
public class Top {
    public void show(int i) {
        System.out.println("Top.show(int)" + i);
    }
    
    public static void main(String[] args) {
        Top t = new Top();
        t.show(1);
        // t.show(1.0);
        // above line gives compiler error  error: incompatible types: possible lossy conversion from double to int
        Bottom b = new Bottom();
        b.show(1);
        b.show(1.0);
    }
}
