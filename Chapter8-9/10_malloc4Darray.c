#include <stdio.h>
#include <stdlib.h>

// Function to simulate temperature changes
void simulateTemperature(int days, int levels, int latitudes, int longitudes, float ****weatherData) {
    // Simulate some temperature changes over time for each point
    for (int day = 0; day < days; day++) {
        for (int level = 0; level < levels; level++) {
            for (int lat = 0; lat < latitudes; lat++) {
                for (int lon = 0; lon < longitudes; lon++) {
                    // Simple model: temperature decreases with altitude and varies with time
                    weatherData[day][level][lat][lon] = 20.0 - (level * 2.0) + (day * 1.5);
                }
            }
        }
    }
}

int main() {
    int days = 3;       // Number of days to simulate
    int levels = 2;     // Number of altitude levels
    int latitudes = 3;  // Number of latitude points
    int longitudes = 3; // Number of longitude points

    // Allocate a 4D array for the weather data
    float ****weatherData = (float****) malloc(days * sizeof(float***));
    for (int day = 0; day < days; day++) {
        weatherData[day] = (float***) malloc(levels * sizeof(float**));
        for (int level = 0; level < levels; level++) {
            weatherData[day][level] = (float**) malloc(latitudes * sizeof(float*));
            for (int lat = 0; lat < latitudes; lat++) {
                weatherData[day][level][lat] = (float*) malloc(longitudes * sizeof(float));
            }
        }
    }

    // Run the simulation
    simulateTemperature(days, levels, latitudes, longitudes, weatherData);

    // Print the simulated weather data
    for (int day = 0; day < days; day++) {
        printf("Day %d:\n", day);
        for (int level = 0; level < levels; level++) {
            printf("  Altitude level %d:\n", level);
            for (int lat = 0; lat < latitudes; lat++) {
                for (int lon = 0; lon < longitudes; lon++) {
                    printf("    [%d, %d]: %.2f°C\n", lat, lon, weatherData[day][level][lat][lon]);
                }
            }
        }
        printf("\n");
    }

    // Free the allocated memory
    for (int day = 0; day < days; day++) {
        for (int level = 0; level < levels; level++) {
            for (int lat = 0; lat < latitudes; lat++) {
                free(weatherData[day][level][lat]);
            }
            free(weatherData[day][level]);
        }
        free(weatherData[day]);
    }
    free(weatherData);

    return 0;
}
