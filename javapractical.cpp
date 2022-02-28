import
public class javapractical
{
	public static void main(String[] args)
	{
		final int WEIGHT_MIN = 0;
		final int WEIGHT_MAX = 20;
		final int DISTANCE_MIN = 10;
		final int DISTANCE_MAX = 3000;

		float package_weight;
		float distance;
		float total_charges;

		System.out.print("\nWhat is the weight (kg) of the package? ");
		package_weight = Float.parseFloat(ConsoleInput.readToWhiteSpace(true));

		if (package_weight <= WEIGHT_MIN package_weight > WEIGHT_MAX)
		{
			System.out.print("\nWe're sorry, package weight must be\n");
			System.out.print(" more than 0kg and less than 20kg.\n");
			System.out.print("Rerun the program and try again.\n");
			System.out.print("\n");
		}
		else
		{
			System.out.print("\nDistance? ");
			distance = Float.parseFloat(ConsoleInput.readToWhiteSpace(true));

			if (distance < DISTANCE_MIN distance > DISTANCE_MAX)
			{
				System.out.print("\nWe're sorry, the distance must be\n");
				System.out.print("within 10 and 3000 miles.\n");
				System.out.print("Rerun the program and try again.\n");
				System.out.print("\n");
			}
			else
			{
				 if (package_weight <= 2F)
				 {
					total_charges = (distance / 500) * 1.10;
				 }
				else if (package_weight > 2F && package_weight <= 6F)
				{
					total_charges = (distance / 500) * 2.20;
				}
				else if (package_weight > 6F && package_weight <= 10F)
				{
					total_charges = (distance / 500) * 3.70;
				}
				else if (package_weight > 10F && package_weight <= 20F)
				{
					total_charges = (distance / 500) * 4.80;
				}

				System.out.printf("%.2f", "Total charges are $");
				System.out.printf("%.2f", total_charges);
				System.out.printf("%.2f", "\nFor a distance of ");
				System.out.printf("%.2f", distance);
				System.out.printf("%.2f", " miles\nand a total weight of ");
				System.out.printf("%.2f", package_weight);
				System.out.printf("%.2f", "kg.\n");
				System.out.printf("%.2f", "\n");
			}

		}

	}
}
