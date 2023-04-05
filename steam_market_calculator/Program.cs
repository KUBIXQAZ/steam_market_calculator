namespace steam_market_calculator
{
    internal class Program
    {
        static public void display_title()
        {
            Console.Clear();
            Console.WriteLine("STEAM MARKET CALCULATOR BY KUBIXQAZ");
            Console.WriteLine("CALCULATOR WORKS PERFECTLY ONLY IN DOLLARS!");
            Console.WriteLine("=================================");
        }

        static public void Main()
        {
            string price_of_item = "";
            string selling_item_for = "";
            float earnings;

            //steam fee and specific game fee 15%//
            const float sf_sgf = 1.15f;
            const string sf_sgf_in_procent = "15%";
            const float steam_cut = 0.01f;   

            while(!float.TryParse(price_of_item, out float parsed_price_of_item) || parsed_price_of_item < 0.03f)
            {
                display_title();
                Console.WriteLine("Enter the price at which you want to buy the item:");
                price_of_item = Console.ReadLine();
            }

            while(!float.TryParse(selling_item_for, out float parsed_selling_item_for) || parsed_selling_item_for < 0.03f)
            {
                display_title();
                Console.WriteLine("Enter for what price you want to sell this item:");
                selling_item_for = Console.ReadLine();
            }

            earnings = (float.Parse(selling_item_for) / sf_sgf - steam_cut) - float.Parse(price_of_item);

            display_title();
            Console.WriteLine("Your earnings would be: " + earnings + "$.");
            Console.WriteLine("=================================");
            Console.WriteLine("You want to buy the item for: " + price_of_item + "$");
            Console.WriteLine("You want to sell the item for: " + selling_item_for + "$");
            Console.WriteLine(selling_item_for + "$ - (steam fee + steam specific game fee) " + sf_sgf_in_procent + " = " + float.Parse(selling_item_for) / sf_sgf + "$");
            Console.WriteLine(float.Parse(selling_item_for) / sf_sgf + "$ - steam cut (" + steam_cut + "$) = " + earnings + "$");
            Console.WriteLine("=================================");

            Console.WriteLine("\nDo you want to calculate the steam tax again? (y/n)");
            string again = Console.ReadLine();
            if (again.ToLower() == "y") Main();
        }
    }
}