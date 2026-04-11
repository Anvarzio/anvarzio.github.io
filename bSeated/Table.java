import java.util.Set;

public class Table {

    private int tableID;
    private int seats;
    private Set<TableType> type;
    private Set<TableTags> tags;

    public Table(int tableID, int seats, Set <TableType> type, Set <TableTags> tags) {
        this.tableID = tableID;
        this.seats = seats;
        this.type = type;
        this.tags = tags;
    }

    public void status() {
        System.out.printf(
            "Table: %d \nSeats: %d \nType(s): %s \nTag(s): %s",
            tableID, seats, type, tags
        );
    }
}
