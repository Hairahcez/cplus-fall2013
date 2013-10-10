
class Point
{
	private:
		double latitude_;
		double longitude_;
	public:
		// Constructor
		Point();  // default constructor
		// Custom constructor
		Point(double, double);
		// Accessors
		double latitude();
		double longitude();
		// Mutators
		void set_latitude(double);
		void set_longitude(double);


		static double random_latitude();
		static double random_longitude();
		static Point random_point();
};