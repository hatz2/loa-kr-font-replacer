#include <iostream>
#include <filesystem>
#include <thread>
#include <chrono>

int main(int argc, const char* argv[])
{
    if (argc != 3) {
        std::cerr << "This program must be started with the following arguments: ";
        std::cerr << "<Original font path> <KR font path>" << std::endl;
        std::cin.get();
        return EXIT_FAILURE;
    }

    const std::string original_font_path = argv[1];
    const std::string kr_font_path = argv[2];
    const std::string launch_loa_cmd = "start steam://rungameid/1599340";

    if (std::filesystem::copy_file(kr_font_path, original_font_path, std::filesystem::copy_options::overwrite_existing)) {
        std::cout << "KR Font replaced successfully." << std::endl;
    }
    else {
        std::cerr << "KR Font could not be replaced." << std::endl;
    }

    std::cout << "Launching Lost Ark..." << std::endl;
    std::system(launch_loa_cmd.c_str());
    std::cout << "You can close this window." << std::endl;

    constexpr int seconds_to_wait = 5;
    for (int i = seconds_to_wait; i > 0; --i) {
        std::cout << "Closing this window automatically in " << i << " seconds..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return EXIT_SUCCESS;
}
