# Energy Drink Survey Calculator

print("Energy Drink Survey Calculator")
print("=" * 40)
print()

total_customers = int(input("Enter the total number of customers surveyed: "))
energy_drink_percentage = float(input("Enter the percentage who purchase energy drinks (e.g., 15 for 15%): ")) / 100
citrus_preference_percentage = float(input("Enter the percentage who prefer citrus flavor (e.g., 58 for 58%): ")) / 100

customers_buying_energy_drinks = total_customers * energy_drink_percentage
customers_preferring_citrus = customers_buying_energy_drinks * citrus_preference_percentage

print("\nEnergy Drink Survey Results")
print("=" * 40)
print(f"\nTotal customers surveyed: {total_customers:,}")
print(f"\nCustomers purchasing energy drinks per week:")
print(f"  {customers_buying_energy_drinks:,.0f} customers ({energy_drink_percentage * 100}%)")
print(f"\nCustomers preferring citrus-flavored energy drinks:")
print(f"  {customers_preferring_citrus:,.0f} customers ({citrus_preference_percentage * 100}% of energy drink buyers)")
print("\n" + "=" * 40)
