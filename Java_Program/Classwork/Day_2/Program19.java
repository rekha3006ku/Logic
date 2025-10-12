class Program19
{
    public void Display()
    {
        System.out.println("Jay Ganesh..");
        System.out.println("Jay Ganesh..");
        System.out.println("Jay Ganesh..");
        System.out.println("Jay Ganesh..");
    }
    public static void main(String Arr[])
    {
        Display();          //Error  (static function cannot access non static function ,
                                                        //but reverse is possible)

    }
}