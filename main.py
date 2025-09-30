# Energy Drink Survey Calculator

total_customers = 16500
energy_drink_percentage = 0.15
citrus_preference_percentage = 0.58

customers_buying_energy_drinks = total_customers * energy_drink_percentage
customers_preferring_citrus = customers_buying_energy_drinks * citrus_preference_percentage

print("Energy Drink Survey Results")
print("=" * 40)
print(f"\nTotal customers surveyed: {total_customers:,}")
print(f"\nCustomers purchasing energy drinks per week:")
print(f"  {customers_buying_energy_drinks:,.0f} customers ({energy_drink_percentage * 100}%)")
print(f"\nCustomers preferring citrus-flavored energy drinks:")
print(f"  {customers_preferring_citrus:,.0f} customers ({citrus_preference_percentage * 100}% of energy drink buyers)")
print("\n" + "=" * 40)
