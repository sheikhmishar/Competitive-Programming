import java.util.*;
import java.io.*;

public class DFSMinDistance {

    public static int minDistance, nodeCount, minPathCount;
    public static char[][] matrix;
	public static Scanner preferredScanner, stringParser;
	public static LinkedList<String> minPathList;
	public static final String
		FILE_LOCATION = "D:\\Portfolio\\CompetitiveProgramming\\VirtualJudge\\06-18-19-graph\\",
		FILE_NAME = "DFSMinDistance.txt",
		SAMPLE_CASE = "9 o x o o o x o o o o o o x o x o o o o x o x o x o x o o x o x o x o x o o o o x o x o x o o o o x o o o x o o x o x o x o x o o x o x o x o x o o o o o o o o o o";
	

    public static void main(String[] args) throws Exception {

		while (true) {
			preferredScanner = new Scanner(System.in);
			System.out.println("==========================");
			System.out.println("\nInput Mode: \n\n\t1. File\n\t2. Keyboard\n\t3. Sample Problem\n\t4. Exit\n");
			System.out.println("==========================");
			System.out.print("Enter: ");
			switch (preferredScanner.nextInt()) {
				case 1:
					System.out.println("\nFile Location: \n\t1. Default(" + FILE_LOCATION + FILE_NAME + ")\n\t2. Custom:\n\t3. Back");
					
					switch (preferredScanner.nextInt()) {
						case 1:
							preferredScanner = new Scanner(new File(FILE_LOCATION + FILE_NAME));
							break;
						case 2:
							preferredScanner = new Scanner(new File(preferredScanner.next()));
							break;
						case 3:
							continue;
					}
					
					break;
				case 2:
					break;
				case 3:
					preferredScanner = new Scanner(SAMPLE_CASE);
					break;
				case 4:
					System.out.println("Program terminated");
					return;
				default:
					continue;
			}

			System.out.print("Number of Nodes: ");
			nodeCount = preferredScanner.nextInt();
			
			if (nodeCount < 1) {
				System.out.println("At least 1 node is needed");
				continue;
			}
			matrix = new char[nodeCount][nodeCount];

			System.out.println("Input Matrix: (In row column order)");
			for (int i = 0; i < nodeCount; i++)
				for (int j = 0; j < nodeCount; j++)
					matrix[i][j] = preferredScanner.next().charAt(0);
					
					
			System.out.println("Given Matrix:\n" + print2D(matrix));

			minPathList = new LinkedList<>();
			minDistance = -1;
			minPathCount = -1;
			findMinDistance();

			if (minDistance != -1)
				System.out.println("Minimum Distance: " + minDistance + "\n");
				
			System.out.println("==========================");
			
			if (minPathCount == -1 || matrix[0][0] == 'x') {
				System.out.println("No path found from [ 0 0 ] to [ " + (nodeCount - 1) +  "  " + (nodeCount - 1) + " ] ");
				continue;
			}
			else
				System.out.println("Paths: " + minPathCount + "\nFrom [ row column ] -> To [ row column ] \n");

			for (int it = 0; it < minPathList.size(); it++) {

				stringParser = new Scanner(minPathList.get(it));

				for (int i = 0; stringParser.hasNextInt(); i++) {
					System.out.print("[ " + stringParser.nextInt() + " " + stringParser.nextInt() + " ]");
					if (stringParser.hasNextInt())
						System.out.print(" -> ");
					if ((i - 3) % 4 == 0)
						System.out.println();
				}
				System.out.println();

				for (int i = 0; i < nodeCount; i++)
					for (int j = 0; j < nodeCount; j++)
						matrix[i][j] = ' ';

				stringParser = new Scanner(minPathList.get(it));
				while (stringParser.hasNext())
					matrix[stringParser.nextInt()][stringParser.nextInt()] = 'o';

				System.out.println("\n" + print2D(matrix));

				System.out.println();
			}
		}
    }

    public static void findMinDistance() {
    	findMinDistance(0, 0, 0, "");
    }

    public static void findMinDistance(int row, int column, int currentDistance, String currentPath) {

		if (matrix[row][column] == 'o') {
			matrix[row][column] = 'c';  // means the node is being checked

			if (column + 1 < nodeCount && matrix[row][column + 1] == 'o') // right
				findMinDistance(row, column + 1, currentDistance + 1, currentPath + row + " " + column + " ");

			if (column - 1 >= 0 && matrix[row][column - 1] == 'o') // left
				findMinDistance(row, column - 1, currentDistance + 1, currentPath + row + " " + column + " ");

			if (row + 1 < nodeCount && matrix[row + 1][column] == 'o') // down
				findMinDistance(row + 1, column, currentDistance + 1, currentPath + row + " " + column + " ");

			if (row - 1 >= 0 && matrix[row - 1][column] == 'o') // up
				findMinDistance(row - 1, column, currentDistance + 1, currentPath + row + " " + column + " ");

			if (row == nodeCount - 1 && column == nodeCount - 1) {

				if (minDistance == -1 || currentDistance < minDistance) {
					minPathCount = 0;
					minDistance = currentDistance;
					minPathList.clear();
				}

				if (currentDistance == minDistance) {
					minPathCount++;
					minPathList.add(currentPath + row + " " + column);
				}
			}

			matrix[row][column] = 'o'; // means checking finished and resetting the status
		}
    }

    public static String print2D(char[][] ch) {     // for netbeans visual debugger and printing matrix

        String s = "";

        for (int i = 0; i < nodeCount; i++) {
			s += "| ";
			for (int j = 0; j < nodeCount; j++)
            	s += matrix[i][j] + " ";
			s += " |\n";
		}

        return s;

    }
	

}
 
/*
	I think, eita worst case	
 
	5
	o x o o o
	o x o x o
	o x o x o
	o x o x o
	o o o x o
 
	6
	o x o o o x
	o x o x o x
	o x o x o x
	o x o x o x
	o x o x o x
	o o o x o o
 
	SAMPLE_CASE = "9 o x o o o x o o o o x o x o x o x o o x o x o x o x o o x o x o x o x o o x o x o x o x o o x o x o x o x o o x o x o x o x o o x o x o x o x o o o o x o o o x o";

 
 */
