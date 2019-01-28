import java.util.*;

public class OhNoJava {
    private final int dont_change_me;
    private final ArrayList<Integer> v;
    public OhNoJava () {
        dont_change_me = 4;
        //dont_change_me++; Can not change primitive var
        v = new ArrayList<>();
        v.add(1);
        //v = new ArrayList<>();
    }
    
    public static void main(String[] args) {
        OhNoJava ohNo = new OhNoJava();
    }
}
