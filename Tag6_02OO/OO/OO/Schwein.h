#pragma once
#include <ostream>
#include <string>

namespace basf {
	namespace tiere {

		class Schwein
		{
			friend Schwein operator + (const Schwein& a, const Schwein& b);
		private:
			// Instanzvariablen
			std::string name;
			int gewicht;

			// Klassenvariablen
			static int counter;
		

		public:
			void set_gewicht(const int gewicht);
			static int get_counter();

			Schwein(std::string name = "nobody");
			Schwein(const Schwein& other);

			//Schwein(const Schwein& other) = delete;

			~Schwein();

			std::string get_name() const;

			void set_name(const std::string& name);

			int get_gewicht() const;

			void fressen();

			Schwein& operator ++ (); // Preincrement
			Schwein operator ++ (int dummy); // Postincrement (Parameter ist nur Kennzeichen für den Kompiler
			Schwein& operator +=(int anzahlKartoffeln);


		};






		std::ostream& operator<<(std::ostream& out, const Schwein& schweinToPrint);
	}
}
