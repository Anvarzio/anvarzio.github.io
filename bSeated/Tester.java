import java.util.Set;

public class Tester{
    public static void main (String[] args)
   {
       Table table = new Table (
       21,
       4,
       Set.of(TableType.BOOTH),
       Set.of(TableTags.WHEELCHAIR, TableTags.ELDERLY, TableTags.TODDLER, TableTags.MOVABLE));
       
       table.status();
   }
}
