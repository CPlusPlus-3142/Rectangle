/**
 * We are introducing the Room class to explain an OOP concept:
 * COMPOSITION  
 * has-a relationship between classes
 * Every room has a floor (which is of type Rectangle)
 * 
 */
public class Room {
    
    private Rectangle floor; // field of the class is an object
      //  Rectangle windows[4];
    public Room() {}
    Room(double width, double length) {
        floor = new Rectangle(width, length);
    }
    Room(Rectangle fl) {
        floor = fl;
    }
       
}